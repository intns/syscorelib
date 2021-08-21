#ifndef _ATXSTREAM_H
#define _ATXSTREAM_H

#pragma once
#include "Stream.h"

#include <types.hpp>
#include "TcpStream.h"


class DllImport AtxStream : public Stream {
public:
    AtxStream(class AtxStream const&);
    AtxStream(void);
    class AtxStream& operator=(class AtxStream const&);
    virtual void close(void);
    virtual void flush(void);
    virtual int getPending(void);
    void init(void);
    bool open(char*, int);
    virtual void read(void*, int);
    virtual void write(void*, int);

    TcpStream* m_stream; // _08
    s32 m_dwordC;        // _0C
};

#endif
