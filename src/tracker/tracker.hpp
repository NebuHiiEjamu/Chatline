#ifndef _TRACKER_H
#define _TRACKER_H

#include <bitset>
#include <map>
#include <set>
#include <string>
#include <string_view>

#include "user/forward.hpp"
#include "forward.hpp"
#include "../common/src/server.hpp"
#include "../common/src/typedefs.hpp"

struct sqlite3;

class Tracker : public Server
{
public:
	static constexpr uint16 defaultPort = 7220;
	
	static constexpr std::string_view getDefaultDatabase();
	static TrackerRef getInstance();

	~Tracker();
	bool createSession(uint32, TrackerConnectionPtr);
	void removeSession(uint32);
	uint32 getNextServerId();
	uint16 getPort() const;
	void run(int, char**) override;
private:
	Tracker();
private:
	static std::shared_ptr<Tracker> instance;

	std::map<uint32, SessionPtr> sessionMap;
	std::set<ByteString> passwords;
	std::set<std::pair<Address, Timestamp>> bans;
	sqlite3 *db;
	std::mutex mutex;
	sint32 nextServerId;
	uint16 port;
};

#endif // _TRACKER_H
