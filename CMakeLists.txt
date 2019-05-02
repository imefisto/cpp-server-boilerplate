cmake_minimum_required(VERSION 3.1...3.14)

project(PortableCpp VERSION 1.0
	DESCRIPTION "Portable cpp"
	LANGUAGES CXX)

include(config.cmake)

add_subdirectory(src)
add_subdirectory(apps)

set(PUBLIC_DIR "public")
set(APP_DIST_DIR "${CMAKE_CURRENT_BINARY_DIR}/apps")
file(COPY ${PUBLIC_DIR} DESTINATION ${APP_DIST_DIR})
