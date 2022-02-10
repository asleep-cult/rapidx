#include <stdbool.h>

struct RxReadStream {
    bool reading;
    void (*read)(void (*callback)(char *data));
};

struct RxWriteStream {
    bool writing;
    void (*write)(char *data, size_t size);
};

bool rx_stream_reading(struct RxReadStream *stream);
void rx_stream_read(struct RxReadStream *stream, void (*callback)(char *data));

bool rx_stream_writing(struct RxWriteStream *stream);
void rx_stream_write(struct RxWriteStream *stream, char *data, size_t size);
