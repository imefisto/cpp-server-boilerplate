add_library(PortableServer
    RequestHandlers/FileRequestHandler.cpp
    RequestHandlers/HelloRequestHandler.cpp
    RequestHandlerFactory.cpp
    Application.cpp
    )

include_directories(
    ${USR_FOLDER}/include
)

find_library(POCO_UTIL PocoUtil PATHS ${USR_FOLDER}/lib NO_DEFAULT_PATH)
find_library(POCO_NET PocoNet PATHS ${USR_FOLDER}/lib NO_DEFAULT_PATH)
find_library(POCO_FOUNDATION PocoFoundation PATHS ${USR_FOLDER}/lib NO_DEFAULT_PATH)
find_library(POCO_JSON PocoJSON PATHS ${USR_FOLDER}/lib NO_DEFAULT_PATH)
find_library(POCO_XML PocoXML PATHS ${USR_FOLDER}/lib NO_DEFAULT_PATH)

if(WIN32)
	set(EXTRA_LIBS comctl32 wsock32 ws2_32 iphlpapi)
else()
	set(EXTRA_LIBS pthread) # dl m X11)
endif()

target_link_libraries(PortableServer
	${POCO_UTIL}
	${POCO_NET}
	${POCO_JSON}
	${POCO_XML}
	${POCO_FOUNDATION}
	${EXTRA_LIBS}
    )

target_compile_definitions(PortableServer
	PRIVATE	-DPOCO_STATIC -DPOCO_NO_AUTOMATIC_LIBS
)
