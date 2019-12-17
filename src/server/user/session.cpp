#include "session.hpp"
#include "trackerconnection.hpp"
#include "tracker.hpp"

Session::Session(uint32 id, TrackerConnectionPtr connection):
	connection(connection),
	id(id)
{
}

uint32 Session::getId() const
{
	return id;
}

uint32 Session::getIcon() const;
{
	return icon;
}
