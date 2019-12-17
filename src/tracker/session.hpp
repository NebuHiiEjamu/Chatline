#ifndef _SESSION_H
#define _SESSION_H

#include "forward.hpp"
#include "../../common/src/forward.hpp"
#include "../../common/src/typedefs.hpp"

class Session : public std::enable_shared_from_this<Session>
{
public:
	Session(uint32, TrackerConnectionPtr);
	uint32 getId() const;
	uint16 getIcon() const;
private:
	TrackerConnectionPtr connection;
	std::string name;
	std::string description;
	std::string key;
	std::mutex mutex;
	Timestamp uptime;
	uint32 id;
	uint16 users;
	uint16 port;
	uint16 icon;
};

#endif // _SESSION_H
