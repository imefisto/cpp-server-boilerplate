#ifndef SERVER_FILE_REQUEST_HANDLER_H
#define	SERVER_FILE_REQUEST_HANDLER_H

#include <ostream>
#include "Poco/Net/HTTPRequestHandler.h"
#include "Poco/Net/HTTPResponse.h"
#include "Poco/Net/HTTPServerResponse.h"
#include "Poco/Net/HTTPServerRequest.h"
#include "Poco/Path.h"
#include "Poco/Exception.h"

using namespace Poco::Net;

namespace Server {

    class FileRequestHandler : public HTTPRequestHandler {

      public:
    
        virtual void handleRequest(
                HTTPServerRequest & request,
                HTTPServerResponse & response
                );
      private:
        std::string getUri(const HTTPServerRequest & request);
        std::string getMime(const std::string & uri);
        std::string htdocs = "public/";
    };
}

#endif
