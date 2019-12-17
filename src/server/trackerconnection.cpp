#include "trackerconnection.hpp"
#include "../common/src/hive.hpp"
#include "clserver.hpp"
#include "stream.hpp"

TrackerConnection::TrackerConnection(HiveRef hive):
	Connection(hive)
{
}

void TrackerConnection::onConnect(const std::string_view&, uint16)
{
}

void TrackerConnection::onSend(const Buffer &buffer)
{
}

void TrackerConnection::onReceive(Buffer &buffer)
{	
}

void TrackerConnection::onError(Error)
{
}

void TrackerConnection::onDisconnect()
{
}
