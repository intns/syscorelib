#ifndef _BUFFEREDOUTPUTSTREAM_H
#define _BUFFEREDOUTPUTSTREAM_H

#pragma once
#include "Stream.h"

#include <types.hpp>

class DllImport BufferedOutputStream : public Stream {
public:
    BufferedOutputStream(class BufferedOutputStream const&);
    BufferedOutputStream(class Stream*, int, bool);
    class BufferedOutputStream& operator=(class BufferedOutputStream const&);
    void addChar(char);
    virtual void flush(void);
    virtual void write(void*, int);

    u8* m_buffer;       // _08
    s32 m_bufferSize;   // _0C
    s32 m_amountToRead; // _10
    Stream* m_output;   // _14
    bool m_hasNewline;  // _18
};

#endif
