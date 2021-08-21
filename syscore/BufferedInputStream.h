#ifndef _BUFFEREDINPUTSTREAM_H
#define _BUFFEREDINPUTSTREAM_H

#pragma once
#include "RandomAccessStream.h"

#include <types.hpp>

class DllImport BufferedInputStream : public RandomAccessStream {
public:
    BufferedInputStream(class BufferedInputStream const&);
    BufferedInputStream(class Stream*, unsigned __int8*, int);
    BufferedInputStream(void);
    class BufferedInputStream& operator=(class BufferedInputStream const&);
    virtual void close(void);
    void fillBuffer(void);
    virtual int getPending(void);
    virtual int getPosition(void);
    void init(class Stream*, unsigned __int8*, int);
    void open(class Stream*);
    virtual void read(void*, int);
    void resetBuffer(void);

    u8* m_buffer;           // _08
    s32 m_bufferSize;       // _0C
    s32 m_amountToRead;     // _10
    s32 m_readLimit;        // _14
    s32 m_position;         // _18
    Stream* m_bufferStream; // _1C
};

#endif
