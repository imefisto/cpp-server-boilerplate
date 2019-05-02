#include "Application.h"

int Server::Application::main(const std::vector < std::string > & args) {

#ifdef _WIN32
    Poco::Net::initializeNetwork();
#endif

    // TODO puerto debe ser configurable
    HTTPServer s(new RequestHandlerFactory(), ServerSocket(_port), new HTTPServerParams);

    s.start();
    
    waitForTerminationRequest(); // wait for CTRL-C or kill

    s.stop();

#ifdef _WIN32
    Poco::Net::uninitializeNetwork();
#endif
    
    return Server::Application::EXIT_OK;
}
