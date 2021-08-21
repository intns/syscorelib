#ifndef _RANDOMACCESSSTREAM_H
#define _RANDOMACCESSSTREAM_H

#pragma once
#include <types.hpp>
#include "Stream.h"


class DllImport RandomAccessStream : public Stream {
public:
    RandomAccessStream(class RandomAccessStream const&);
    RandomAccessStream(void);
    class RandomAccessStream& operator=(class RandomAccessStream const&);
    virtual int getLength(void);
    virtual int getPending(void);
    virtual int getPosition(void);
    void padFile(unsigned __int32);
    void padFileTo(unsigned __int32, unsigned __int32);
    void readFrom(int, void*, int);
    int readIntFrom(int);
    virtual void setPosition(int);
    void skipPadding(unsigned __int32);
    void writeIntTo(int, int);
    void writeTo(int, void*, int);
};

#endif
