#ifndef _BUFFEREDSTREAM_H
#define _BUFFEREDSTREAM_H

#pragma once
#include "BufferedInputStream.h"

#include "RandomAccessStream.h"

#include <types.hpp>

class DllImport BufferedStream : public RandomAccessStream {
public:
    BufferedStream(class BufferedStream const&);
    BufferedStream(class RandomAccessStream*, int);
    BufferedStream(void);
    class BufferedStream& operator=(class BufferedStream const&);
    virtual void close(void);
    virtual int getLength(void);
    virtual int getPending(void);
    virtual int getPosition(void);
    void init(class RandomAccessStream*, int);
    virtual void read(void*, int);
    virtual void setPosition(int);

    RandomAccessStream* m_stream;     // _08
    BufferedInputStream m_buffStream; // _0C
};

#endif
