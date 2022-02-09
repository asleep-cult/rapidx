enum RxError {
    E_OK,
    E_INVALID_STATUS,
};

static inline char *rx_error_message(enum RxError error) {
    switch (error) {
    case E_OK: return "Success";
    case E_INVALID_STATUS: return "Invalid HTTP status";
    default: return "Invalid error";
    }
}
