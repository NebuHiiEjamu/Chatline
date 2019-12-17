#include <fmt/core.h>
#include <sqlite3.h>

#include "tracker.hpp"
#include "../common/src/hive.hpp"
#include "trackerconnection.hpp"
#include "session.hpp"

std::shared_ptr<Tracker> Tracker::instance = std::make_shared<Tracker>();

constexpr std::string_view Tracker::getDefaultDatabase()
{
}

Tracker::Tracker():
	nextServerId(1)
{
}

bool Tracker::createSession(uint32 id, TrackerConnectionPtr connection)
{
	LockGuard lock(mutex);
	SessionPtr newSession(new Session(id, connection));
	
	connection->setSession(newSession);
	sessionMap[id] = newSession;
	logger->info("Incoming server request {} with ID {}", connection->getAddress().to_string(), id);

	return true;
}

void Tracker::removeSession(uint32 id)
{
	sessionMap.erase(id);
}

uint32 Tracker::getNextServerId()
{
	LockGuard lock(mutex);
	return nextServerId++;
}

uint16 Tracker::getPort() const
{
	return port;
}

std::string_view& Tracker::getName() const
{
	return name;
}

std::string_view& Tracker::getAgreement() const
{
	return agreement;
}

std::string_view& Tracker::getDescription() const
{
	return description;
}

uint32 Tracker::getUserCount()
{
	LockGuard lock(mutex);
	return static_cast<uint16>(sessionMap.size());
}

AccountRef Tracker::getAccount(UserSessionRef session, const std::string_view &login,
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

void Tracker::run(int argc, char **argv)
{
}

TrackerRef Tracker::getInstance()
{
	return instance;
}
