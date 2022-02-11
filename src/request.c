#include <stddef.h>
#include <rapidx/request.h>

char *rx_http_method(RxHTTPMethod method, RxError *error) {
    switch (method) {
    case GET: return "GET";
    case HEAD: return "HEAD";
    case PUT: return "PUT";
    case DELETE: return "DELETE";
    case CONNECT: return "CONNECT";
    case OPTIONS: return "OPTIONS";
    case TRACE: return "TRACE";
    case PATCH: return "PATCH";
    }

    *error = E_INVALID_METHOD;
    return NULL;
}
