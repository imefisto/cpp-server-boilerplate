#include "FileRequestHandler.h"

void Server::FileRequestHandler::handleRequest(HTTPServerRequest & request, HTTPServerResponse & response)
{
    std::string uri = getUri(request), mime = getMime(uri);

    try {
        response.setStatus(HTTPResponse::HTTP_OK);
        response.setContentType(mime);
        response.sendFile(uri, mime);
    } catch (Poco::FileNotFoundException e) {
        response.setStatus(HTTPResponse::HTTP_NOT_FOUND);
        uri = htdocs + "errors/404.html";
        mime = getMime(uri);
        response.sendFile(uri, mime);
    }

    std::ostream& out = response.send();
    out.flush();
}

std::string Server::FileRequestHandler::getUri(const HTTPServerRequest & request)
{
    if(request.getURI() == "/")
    {
        return htdocs + "index.html";
    }

    return htdocs + request.getURI();
}

std::string Server::FileRequestHandler::getMime(const std::string & uri)
{
    Poco::Path p{uri};

    if (p.getExtension() == "html") {
        return "text/html";
    } else if (p.getExtension() == "css") {
        return "text/css";
    } else if (p.getExtension() == "js") {
        return "application/javascript";
    } else if (p.getExtension() == "json") {
        return "application/json";
    } else if (p.getExtension() == "ico") {
        return "image/x-icon";
    } else if (p.getExtension() == "png") {
        return "image/png";
    } else if (p.getExtension() == "jpg") {
        return "image/jpg";
    }

    return "application/octet-stream";
}
