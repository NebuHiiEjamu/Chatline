#include <fmt/core.h>
#include <sqlite3.h>

#include "clserver.hpp"
#include "../common/src/hive.hpp"
#include "user/clconnection.hpp"
#include "user/session.hpp"

std::shared_ptr<CLServer> CLServer::instance = std::make_shared<CLServer>();

constexpr std::string_view CLServer::getDefaultDatabase()
{
}

CLServer::CLServer():
	nextUserId(1)
{
}

bool CLServer::createSession(uint16 id, CLConnectionPtr connection)
{
	LockGuard lock(mutex);
	SessionPtr newSession(new Session(id, connection));
	
	connection->setSession(newSession);
	sessionMap[id] = newSession;
	logger->info("Incoming connection from {} with session ID {}",
		connection->getAddress().to_string(), id);

	return true;
}

void CLServer::removeSession(uint16 id)
{
	sessionMap.erase(id);
}

uint16 CLServer::getNextUserId()
{
	LockGuard lock(mutex);
	return nextUserId++;
}

uint16 CLServer::getPort() const
{
	return port;
}

std::string_view& CLServer::getName() const
{
	return name;
}

std::string_view& CLServer::getAgreement() const
{
	return agreement;
}

std::string_view& CLServer::getDescription() const
{
	return description;
}

uint16 CLServer::getUserCount()
{
	LockGuard lock(mutex);
	return static_cast<uint16>(sessionMap.size());
}

AccountRef CLServer::getAccount(UserSessionRef session, const std::string_view &login,
	const ByteString &password)
{
	auto account = accountMap.find(login);

	if (account != accountMap.end())
	{
		logger->debug("Account found for session ID {}: {}", session->getId(), login);
		return account->second;
	}
	else
	{
		logger->warn("Account not found for session ID {}: {}", session->getId(), login);
		return nullptr;
	}
}

void CLServer::run(int argc, char **argv)
{
}

CLServerRef CLServer::getInstance()
{
	return instance;
}
