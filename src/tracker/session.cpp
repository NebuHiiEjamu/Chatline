#include "session.hpp"
#include "clconnection.hpp"
#include "../clserver.hpp"

Session::Session(uint32 id, CLConnectionPtr connection):
	connection(connection),
	id(id)
{
}

uint32 Session::getId() const
{
	return id;
}

uint32 Session::getIcon()
{
	LockGuard lock(mutex);
	return icon;
}

std::string&& Session::getClientInfoText()
{
}

std::string&& Session::getVersionString() const
{
	std::string s(std::to_string(version));
	s.insert(1, 1, '.');
	s.insert(3, 1, '.');
	return std::move(s);
}

void Session::setIcon(uint16 newIcon)
{
	LockGuard lock(mutex);
	icon = newIcon;
}
