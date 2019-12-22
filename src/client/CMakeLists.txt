project(ChatlineClient)

find_package(wxWidgets REQUIRED core base adv qa richtext)
include(${wxWidgets_USE_FILE})

set(SOURCE_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
	../common/src/stream.cpp
	../file/fileconnection.cpp
	../file/filesession.cpp
	../stream.cpp
	ui/loginwindow.cpp
	ui/toolbar.cpp
	app.cpp
)

add_executable(ChatlineClient ${SOURCE_FILES})
target_link_libraries(ChatlineClient ${wxWidgets_LIBRARIES})
