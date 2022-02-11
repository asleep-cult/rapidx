#include <rapidx/error.h>

char *rx_error_message(RxError error) {
    switch (error) {
    case E_OK: return "Success";
    case E_INVALID_STATUS: return "Invalid HTTP status";
    default: return "Invalid error";
    }
}
