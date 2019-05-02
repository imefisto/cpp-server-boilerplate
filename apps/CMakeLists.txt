add_executable(PortableCpp app.cpp)

include_directories(
    ${USR_FOLDER}/include
    ${CMAKE_SOURCE_DIR}/src/Infrastructure
)

target_link_libraries(PortableCpp
    PortableServer
)

target_compile_definitions(PortableCpp
	PRIVATE	-DPOCO_STATIC -DPOCO_NO_AUTOMATIC_LIBS
)

# Not supported
# target_link_options(PortableCpp
# 	PRIVATE -static-libgcc -static-libstdc++
# )

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static-libgcc -static-libstdc++")

INSTALL(TARGETS PortableCpp DESTINATION PortableCpp)
