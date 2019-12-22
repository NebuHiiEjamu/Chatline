#include "clconnection.hpp"
#include "session.hpp"
#include "../../common/src/hive.hpp"
#include "../../common/src/listener.hpp"
#include "../server.hpp"

CLConnection::CLConnection(HivePtr hive, AcceptorPtr acceptor):
	Connection(hive),
	acceptor(acceptor)
{
}

void CLConnection::setSession(SessionRef session)
{
	this->session = session;
}

void CLConnection::onAccept(const std::string_view&, uint16)
{
	CLConnectionPtr connection(new CLConnection(hive, acceptor));
	acceptor->accept(connection);

	CLServer::getInstance()->createSession(id, std::dynamic_pointer_cast<CLConnection>
		shared_from_this()));
}

void CLConnection::onSend(const Buffer&)
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
