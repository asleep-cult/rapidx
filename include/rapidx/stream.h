#include <stdbool.h>

typedef void (*callbackfunc)(struct RxReadStream *stream, char *data);

typedef struct RxReadStream {
    bool reading;
    void (*read)(callbackfunc callback);
} RxReadStream;

typedef struct RxWriteStream {
    bool writing;
    void (*write)(char *data, size_t size);
} RxWriteStream;

bool rx_stream_reading(RxReadStream *stream);
void rx_stream_read(RxReadStream *stream, callbackfunc callback);

bool rx_stream_writing(RxWriteStream *stream);
void rx_stream_write(RxWriteStream *stream, char *data, size_t size);
