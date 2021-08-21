#ifndef _ATXFILESTREAM_H
#define _ATXFILESTREAM_H

#pragma once
#include <types.hpp>
#include "RandomAccessStream.h"

#include "AtxStream.h"


class DllImport AtxFileStream : public RandomAccessStream {
public:
    AtxFileStream(class AtxFileStream const&);
    AtxFileStream(void);
    class AtxFileStream& operator=(class AtxFileStream const&);
    virtual void close(void);
    virtual int getLength(void);
    virtual int getPending(void);
    virtual int getPosition(void);
    bool open(char*, unsigned __int32);
    virtual void read(void*, int);
    virtual void setLength(int);
    virtual void setPosition(int);
    virtual void write(void*, int);

    s32 m_position;     // _08
    s32 m_length;       // _0C
    AtxStream m_stream; // _10
};

#endif
