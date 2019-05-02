#ifndef SERVER_THREAD_H
#define	SERVER_THREAD_H

#include "Poco/Runnable.h"
#include "Server/Application.h"

namespace Server {

    class Thread : public Poco::Runnable {

        public:

            Thread(int argc, char** argv, Poco::UInt16 port)
                : _argc(argc), _argv(argv), _port{port}
            {}

            virtual void run() 
            {
                Server::Application _server{_port};
                _result = _server.run(_argc, _argv);
            }

            int getResult()
            { 
                return _result;
            }

            void terminate()
            {
                Server::Application::terminate();
            }

        private:
            int _argc;
            char** _argv;
            Poco::UInt16 _port;
            int _result;
    };

}

#endif
