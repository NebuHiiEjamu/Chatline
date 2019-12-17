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
