#include "clconnection.hpp"
#include "../stream.hpp"

CLConnection::CLConnection():
	Connection(nullptr)
{
}

void CLConnection::onConnect(const std::string_view&, uint16)
{
}

void CLConnection::onSend(const Buffer &buffer)
{
}

void CLConnection::onReceive(Buffer &buffer)
{	
}

void CLConnection::onError(Error)
{
}

void CLConnection::onDisconnect()
{
}
