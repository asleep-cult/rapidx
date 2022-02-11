#include "error.h"
#include "stream.h"

typedef enum RxHTTPMethod {
    GET,
    HEAD,
    POST,
    PUT,
    DELETE,
    CONNECT,
    OPTIONS,
    TRACE,
    PATCH,
} RxHTTPMethod;

typedef struct RxHTTPRequest {
    RxHTTPMethod method;
    
    RxReadStream *stream;
} RxHTTPRequest;

char *rx_http_method(RxHTTPMethod method, RxError *error);
