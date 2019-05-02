#ifndef SERVER_REQUEST_HANDLER_FACTORY_H
#define	SERVER_REQUEST_HANDLER_FACTORY_H

#include <string>
#include "Poco/Net/HTTPRequestHandler.h"
#include "Poco/Net/HTTPRequestHandlerFactory.h"
#include "Poco/Net/HTTPServerRequest.h"
#include "Poco/URI.h"
#include "RequestHandlers/HelloRequestHandler.h"
#include "RequestHandlers/FileRequestHandler.h"

using namespace Poco::Net;
using Poco::URI;

namespace Server {

    class RequestHandlerFactory : public HTTPRequestHandlerFactory {

      public:

        virtual HTTPRequestHandler* createRequestHandler(const HTTPServerRequest & request);
    };
}

#endif
