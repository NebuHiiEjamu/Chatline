#ifndef _STREAM_H
#define _STREAM_H

#include <boost/predef.h>
#include <fmt/core.h>
#include <string_view>

#include "common/src/stream.hpp"
#include "id.hpp"

class CLOutStream : public OutStream
{
public:
	void write(const std::string_view &id, const std::string_view &data)
	{
		write8(252);
		internal << fmt::format("{:0>3}", std::to_string(id.size()).size();
		internal << fmt::format("{:0>3}", std::to_string(data.size()).size();
		internal << id.size() << data.size() << id;
		writeString(data);
	}

	template <class String> void writeSPString(const String &s)
	{
#if BOOST_ENDIAN_BIG_BYTE
		write16(static_cast<uint16>(s.size()), true);
#else
		write16(static_cast<uint16>(s.size()), false);
#endif
		writeString(s);
	}

	void writeTrueFalse(bool b)
	{
		using std::literals;
		writeString(b ? "true"sv : "false"sv);
	}

	void writeYN(bool b)
	{
		write8(b ? 'y' : 'n');
	}
};

#endif // _STREAM_H
