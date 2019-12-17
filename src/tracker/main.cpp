#include <csignal>

#include "../common/src/logger.hpp"
#include "tracker.hpp"

int main(int argc, char **argv)
{
	std::signal(SIGSEGV, &dumpStack);
	std::signal(SIGABRT, &dumpStack);
	
	return 0;
}
