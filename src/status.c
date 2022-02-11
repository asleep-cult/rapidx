#include <stddef.h>
#include <rapidx/status.h>

char *rx_http_status_phrase(RxHTTPStatus status, RxError *error) {
    switch (status) {
    case CONTINUE: return "Continue";
    case SWITCHING_PROTOCOLS: return "Switching Protocols";
    case EARLY_HINTS: return "Early Hints";

    case OK: return "Ok";
    case CREATED: return "Created";
    case NON_AUTHORITATIVE_INFOTMATION: return "Non-Authoritative Information";
    case NO_CONTENT: return "No Content";
    case RESET_CONTENT: return "Reset Content";
    case PARTIAL_CONTENT: return "Partial Content";
    case MULTI_STATUS: return "Multi-Status";

    case MULTIPLE_CHOICES: return "Multiple Choices";
    case MOVED_PERMANENTLY: return "Moved Permanently";
    case FOUND: return "Found";
    case SEE_OTHER: return "See Other";
    case NOT_MODIFIED: return "Not Modified";
    case USE_PROXY: return "Use Proxy";
    case SWITCH_PROXY: return "Switch Proxy";
    case TEMPORARY_REDIRECT: return "Temporary Redirect";
    case PERMANENT_REDIRECT: return "Permanent Redirect";

    case BAD_REQUEST: return "Bad Request";
    case UNAUTHORIZED: return "Unauthorized";
    case PAYMENT_REQUIRED: return "Payment Required";
    case FORBIDDEN: return "Forbidden";
    case NOT_FOUND: return "Not Found";
    case METHOD_NOT_ALLOWED: return "Method Not Allowed";
    case NOT_ACCEPTABLE: return "Not Acceptable";
    case PROXY_AUTHENTICATION_REQUIRED: return "Proxy Authentication Required";
    case REQUEST_TIMEOUT: return "Request Timeout";
    case CONFLICT: return "Conflict";
    case GONE: return "Gone";
    case LENGTH_REQUIRED: return "Length Required";
    case PRECONDITION_FAILED: return "Precondition Failed";
    case PAYLOAD_TOO_LARGE: return "Payload Too Large";
    case URI_TOO_LONG: return "URI Too Long";
    case UNSUPPORTED_MEDIA_TYPE: return "Unsupported Media Type";
    case RANGE_NOT_SATISFIABLE: return "Range Not Satisfiable";
    case EXPECTATION_FAILED: return "Expectation Failed";
    case IM_A_TEAPOT: return "I'm a teapot";
    case MISDIRECTED_REQUEST: return "Misdirected Request";
    case UNPROCESSABLE_ENTITY: return "Unprocessable Entity";
    case LOCKED: return "Locked";
    case FAILED_DEPENDENCY: return "Failed Dependency";
    case TOO_EARLY: return "Too Early";
    case UPGRADE_REQUIRED: return "Upgrade Required";
    case PRECONDITION_REQUIRED: return "Precondition Required";
    case TOO_MANY_REQUESTS: return "Too Many Requests";
    case REQUEST_HEADER_FIELDS_TOO_LARGE: return "Request Header Fields Too Large";
    case UNAVAILABLE_FOR_LEGAL_REASONS: return "Unavailable For Legal Reasons";

    case INTERNAL_SERVER_ERROR: return "Internal Server Error";
    case NOT_IMPLEMENTED: return "Not Implemented";
    case BAD_GATEWAY: return "Bad Gateway";
    case SERVICE_UNAVAILABLE: return "Service Unavailable";
    case GATEWAY_TIMEOUT: return "Gateway Timeout";
    case HTTP_VERSION_NOT_SUPPORTED: return "HTTP Version Not Supported";
    case VARIANT_ALSO_NEGOTIATES: return "Variant Also Negotiates";
    case INSUFFICIENT_STORAGE: return "Insufficient Storage";
    case LOOP_DETECTED: return "Loop Detected";
    case NOT_EXTENDED: return "Not Extended";
    case NETWORK_AUTHENTICATION_REQUIRED: return "Network Authentication Required";
    }

    *error = E_INVALID_STATUS;
    return NULL;
}

char *rx_http_status_code(RxHTTPStatus status, RxError *error) {
    switch (status) {
    case CONTINUE: return "100";
    case SWITCHING_PROTOCOLS: return "102";
    case EARLY_HINTS: return "103";

    case OK: return "200";
    case CREATED: return "201";
    case ACCEPTED: return "202";
    case NON_AUTHORITATIVE_INFOTMATION: return "203";
    case NO_CONTENT: return "204";
    case RESET_CONTENT: return "205";
    case PARTIAL_CONTENT: return "206";
    case MULTI_STATUS: return "207";
    case ALREADY_REPORTED: return "208";

    case MULTIPLE_CHOICES: return "300";
    case MOVED_PERMANENTLY: return "301";
    case FOUND: return "302";
    case SEE_OTHER: return "303";
    case NOT_MODIFIED: return "304";
    case USE_PROXY: return "305";
    case SWITCH_PROXY: return "306";
    case TEMPORARY_REDIRECT: return "307";
    case PERMANENT_REDIRECT: return "308";

    case BAD_REQUEST: return "400";
    case UNAUTHORIZED: return "401";
    case PAYMENT_REQUIRED: return "402";
    case FORBIDDEN: return "403";
    case NOT_FOUND: return "404";
    case METHOD_NOT_ALLOWED: return "405";
    case NOT_ACCEPTABLE: return "406";
    case PROXY_AUTHENTICATION_REQUIRED: return "407";
    case REQUEST_TIMEOUT: return "408";
    case CONFLICT: return "409";
    case GONE: return "410";
    case LENGTH_REQUIRED: return "411";
    case PRECONDITION_FAILED: return "412";
    case PAYLOAD_TOO_LARGE: return "413";
    case URI_TOO_LONG: return "414";
    case UNSUPPORTED_MEDIA_TYPE: return "415";
    case RANGE_NOT_SATISFIABLE: return "416";
    case EXPECTATION_FAILED: return "417";
    case IM_A_TEAPOT: return "418";
    case MISDIRECTED_REQUEST: return "421";
    case UNPROCESSABLE_ENTITY: return "422";
    case LOCKED: return "423";
    case FAILED_DEPENDENCY: return "424";
    case TOO_EARLY: return "425";
    case UPGRADE_REQUIRED: return "426";
    case PRECONDITION_REQUIRED: return "428";
    case TOO_MANY_REQUESTS: return "429";
    case REQUEST_HEADER_FIELDS_TOO_LARGE: return "431";
    case UNAVAILABLE_FOR_LEGAL_REASONS: return "451";

    case INTERNAL_SERVER_ERROR: return "500";
    case NOT_IMPLEMENTED: return "501";
    case BAD_GATEWAY: return "502";
    case SERVICE_UNAVAILABLE: return "503";
    case GATEWAY_TIMEOUT: return "504";
    case HTTP_VERSION_NOT_SUPPORTED: return "505";
    case VARIANT_ALSO_NEGOTIATES: return "506";
    case INSUFFICIENT_STORAGE: return "507";
    case LOOP_DETECTED: return "508";
    case NOT_EXTENDED: return "510";
    case NETWORK_AUTHENTICATION_REQUIRED: return "511";
    }

    *error = E_INVALID_STATUS;
    return NULL;
}
