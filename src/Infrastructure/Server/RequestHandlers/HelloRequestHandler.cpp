#include "HelloRequestHandler.h"

void Server::HelloRequestHandler::handleRequest(HTTPServerRequest & request, HTTPServerResponse & response)
{
  response.setStatus(HTTPResponse::HTTP_OK);
  response.setContentType("application/json");

  std::ostream& out = response.send();
  out << "{\"message\": \"Hello!\"}";
  out.flush();
}

