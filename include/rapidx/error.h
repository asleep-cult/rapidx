enum RxError {
    E_OK,
    E_INVALID_STATUS,
};

char *rx_error_message(enum RxError error);
