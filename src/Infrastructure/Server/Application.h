#ifndef SERVER_APPLICATION_H
#define	SERVER_APPLICATION_H

#include "Poco/Net/HTTPServer.h"
#include "Poco/Net/HTTPServerParams.h"
#include "Poco/Net/ServerSocket.h"
#include "Poco/Util/ServerApplication.h"

#include "RequestHandlerFactory.h"

using namespace Poco::Net;

namespace Server {
    class Application : public Poco::Util::ServerApplication {
        public:
            Application(Poco::UInt16 port)
                : _port(port)
            {}

        protected:
            int main(const std::vector < std::string > & args);

        private:
            Poco::UInt16 _port;
    };
}

#endif
