#include "RequestHandlerFactory.h"

HTTPRequestHandler* Server::RequestHandlerFactory::createRequestHandler(const HTTPServerRequest& request)
{
  URI uri(request.getURI());
  const std::string path = uri.getPath();

  if(path.find("/hello") != std::string::npos)
  {
      return new HelloRequestHandler();
  }

  return new FileRequestHandler();
}
