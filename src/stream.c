#include <assert.h>
#include <rapidx/stream.h>

bool rx_stream_reading(struct RxReadStream *stream) {
    return stream->reading;
}

void rx_stream_read(RxReadStream *stream, callbackfunc callback) {
    assert(!stream->reading);

    stream->reading = true;
    stream->read(callback);
}

bool rx_stream_writing(RxWriteStream *stream) {
    return stream->writing;
}

void rx_stream_write(RxWriteStream *stream, char *data, size_t size) {
    assert(!stream->writing);

    stream->writing = true;
    stream->write(data, size);
}
