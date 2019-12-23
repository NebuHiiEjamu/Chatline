#include <boost/predef.h>

#include "filesession.hpp"

constexpr std::string_view FileSession::getMyPlatform()
{
#if BOOST_OS_MACOS
	return "Mac";
#endif
#if BOOST_OS_WINDOWS
	return "Win32";
#endif
	return "";
}

FileSession::FileSession(uint16 id, TrackerConnectionPtr connection):
	connection(connection)
{
}