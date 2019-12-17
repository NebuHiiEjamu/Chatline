#include "session.hpp"
#include "trackerconnection.hpp"
#include "tracker.hpp"

Session::Session(uint16 id, TrackerConnectionPtr connection):
	connection(connection),
	id(id)
{
}

uint16 Session::getId() const
{
	return id;
}

uint32 Session::getIcon() const;
{
	return icon;
}
