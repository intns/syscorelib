#ifndef _RAMSTREAM_H
#define _RAMSTREAM_H

#pragma once
#include "RandomAccessStream.h"

#include <types.hpp>

class DllImport RamStream : public RandomAccessStream {
public:
    RamStream(class RamStream const&);
    RamStream(void*, int);
    class RamStream& operator=(class RamStream const&);
    virtual int getLength(void);
    virtual int getPending(void);
    virtual int getPosition(void);
    virtual void read(void*, int);
    virtual void setLength(int);
    virtual void setPosition(int);
    virtual void write(void*, int);

    const char* m_buffer; // _08
    u32 m_position;       // _0C
    u32 m_length;         // _10
};

#endif
