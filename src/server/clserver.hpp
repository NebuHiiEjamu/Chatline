#ifndef _CLSERVER_H
#define _CLSERVER_H

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

class CLServer : public Server
{
public:
	static constexpr uint16 defaultPort = 7210;
	
	static constexpr std::string_view getDefaultDatabase();
	static CLServerRef getInstance();

	~CLServer();
	bool createSession(suint32, CLConnectionPtr);
	void removeSession(uint32);
	uint16 getNextUserId();
	uint16 getUserCount();
	uint16 getPort() const;
	std::string_view& getDescription() const;
	std::string_view& getName() const;
	std::string_view& getAgreement() const;
	AccountRef getAccount(SessionRef, const std::string_view&, const ByteString&);
	void run(int, char**) override;
private:
	CLServer();
private:
	static std::shared_ptr<CLServer> instance;

	std::string name;
	std::string description;
	std::string agreement;
	std::map<uint32, SessionPtr> sessionMap;
	std::set<TrackerConnectionPtr> trackerConnections;
	std::map<std::string_view, AccountPtr> accountMap;
	std::set<std::pair<Address, Timestamp>> bans;
	sqlite3 *db;
	std::mutex mutex;
	Timestamp uptime;
	suint32 nextUserId;
	uint16 icon;
	uint16 port;
};

#endif // _CLSERVER_H
