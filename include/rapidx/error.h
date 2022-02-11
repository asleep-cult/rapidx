typedef enum RxError {
    E_OK,
    E_INVALID_STATUS,
    E_INVALID_METHOD,
} RxError;

char *rx_error_message(RxError error);
