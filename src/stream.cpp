#include <boost/endian/conversion.hpp>
#include <fmt/core.h>
#include <string>

#include "id.hpp"
#include "stream.hpp"

template <class T> void CLOutStream::write(T t)
{
	boost::endian::native_to_big_inplace(t);
	internal.write(reinterpret_cast<const Byte*>(&t), sizeof(T));
}

void CLOutStream::write(const std::string_view &id, const Buffer &data)
{
	internal.put(252);
	internal << fmt::format("{:0>3}", std::to_string(id.size()).size();
	internal << fmt::format("{:0>3}", std::to_string(data.in_avail()).size();
	internal << id.size() << data.in_avail() << id << data;
}

template <class String> void CLOutStream::writePString(const String &s)
{
	internal.put(static_cast<Byte>(s.size()));
	internal << s;
}

template <class String> void CLOutStream::writeSPString(const String &s)
{
	uint16 size = boost::endian::native_to_big(static_cast<uint16>(s.size()));
	internal.write(reinterpret_cast<const Byte*>(&size));
	internal << s;
}

void CLOutStream::writeTrueFalse(bool b)
{
	internal << (b ? "true" : "false" );
}

void CLOutStream::writeYN(bool b)
{
	internal << (b ? 'y' : 'n' );
}
