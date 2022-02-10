#include <assert.h>
#include <rapidx/stream.h>

bool rx_stream_reading(struct RxReadStream *stream) {
    return stream->reading;
}

void rx_stream_read(struct RxReadStream *stream, void (*callback)(char *data)) {
    assert(!stream->reading);

    stream->reading = true;
    stream->read(callback);
}

bool rx_stream_writing(struct RxWriteStream *stream) {
    return stream->writing;
}

void rx_stream_write(struct RxWriteStream *stream, char *data, size_t size) {
    assert(!stream->writing);

    stream->writing = true;
    stream->write(data, size);
}
