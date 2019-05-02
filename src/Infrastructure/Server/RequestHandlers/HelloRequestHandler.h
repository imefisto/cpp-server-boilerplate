#ifndef SERVER_HELLO_REQUEST_HANDLER_H
#define	SERVER_HELLO_REQUEST_HANDLER_H

#include "Poco/Net/HTTPRequestHandler.h"
#include "Poco/Net/HTTPResponse.h"
#include "Poco/Net/HTTPServerResponse.h"
#include "Poco/Net/HTTPServerRequest.h"

using namespace Poco::Net;

namespace Server {

    class HelloRequestHandler : public HTTPRequestHandler {

      public:
    
        virtual void handleRequest(
                HTTPServerRequest & request,
                HTTPServerResponse & response
                );
    };
}

#endif
