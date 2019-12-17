#include <fmt/core.h>
#include <string>

#include "id.hpp"
#include "stream.hpp"

template <class String> CLOutStream::write(const std::string_view &id, const String &data)
{
	internal.put(252);
	internal << fmt::format("{:0>3}", std::to_string(id.size()).size();
	internal << fmt::format("{:0>3}", std::to_string(data.size()).size();
	internal << id.size() << data.size() << id;
	internal.write(reinterpret_cast<const Byte*>(data.data())
}