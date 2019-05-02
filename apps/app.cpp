#include <iostream>
#include "Server/ServerStarter.h"

int main(int argc, char** argv)
{
    std::cout << "Starting server ..." << std::endl;

    Server::ServerStarter server;
    server.start(argc, argv, 9090);

    return 0;
}
