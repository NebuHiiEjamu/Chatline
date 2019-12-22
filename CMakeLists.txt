project(Chatline)

find_package(Boost 1.71.0 REQUIRED)

if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/.git)
	find_package(Git)
	if(Git_FOUND)
		execute_process(
			COMMAND {$Git_EXECUTABLE rev-parse --short HEAD
			WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
			OUTPUT_VARIABLE GIT_REVISION
			ERROR_QUIET
			OUTPUT_STRIP_TRAILING_WHITESPACE)
		configure_file(${CMAKE_CURRENT_SOURCE_DIR}/gitrevision.hpp.in
			${CMAKE_CURRENT_SOURCE_DIR}/gitrevision.hpp @ONLY)
	endif()
endif()

add_subdirectory("src")
add_subdirectory("src/common/src")
add_subdirectory("src/client")
add_subdirectory("src/client/icon")
add_subdirectory("src/client/icon/user")
add_subdirectory("src/client/ui")
add_subdirectory("src/server")
add_subdirectory("src/server/file")
add_subdirectory("src/server/user")
add_subdirectory("src/tracker")
