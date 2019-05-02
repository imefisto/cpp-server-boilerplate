#ifndef SERVER_STARTER_H
#define	SERVER_STARTER_H

#include "Poco/Thread.h"
#include "Server/Thread.h"

namespace Server {
    class ServerStarter {
        public: 
            int start(int argc, char** argv, Poco::UInt16 port)
            {
                Server::Thread serverThread{argc, argv, port};
                Poco::Thread thread;
                thread.start(serverThread);

                thread.join();
                return serverThread.getResult();
            }
    };
}

#endif
