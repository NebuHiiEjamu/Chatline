#include <boost/endian/conversion.hpp>
#include <boost/predef.h>
#include <fmt/core.h>
#include <sstream>

#include "id.hpp"
#include "stream.hpp"

using namespace std::literals;

template <class T> void CLOutStream::write(T t)
{
#if BOOST_ENDIAN_BIG_BYTE
	write(t, true);
#else
	write(t, false);
#endif
}

void CLOutStream::write(const std::string_view &id, const ByteString &payload)
{
	std::ostringstream result;
	write8(252);
	result << fmt::format("{:0>3}", std::to_string(id.size()).size();
	result << fmt::format("{:0>3}", std::to_string(payload.size()).size();
	result << id.size() << payload.size() << id;
	writeString(result.str());
	writeString(payload);
}

template <class String> void CLOutStream::writePString(const String &s)
{
	write8(static_cast<Byte>(s.size()));
	writeString(s);
}

template <class String> void CLOutStream::writeSPString(const String &s)
{
#if BOOST_ENDIAN_BIG_BYTE
	write16(static_cast<uint16>(s.size()), true);
#else
	write16(static_cast<uint16>(s.size()), false);
#endif
	writeString(s);
}

void CLOutStream::writeTrueFalse(bool b)
{
	writeString(b ? "true"sv : "false"sv);
}

void CLOutStream::writeYN(bool b)
{
	write8(b ? 'y' : 'n');
}
