#ifndef _TCPSTREAM_H
#define _TCPSTREAM_H

#pragma once
#include "Stream.h"

#include <types.hpp>

class DllImport TcpStream : public Stream {
public:
    TcpStream(class TcpStream const&);
    TcpStream(class WSocket*);
    TcpStream(void);
    class TcpStream& operator=(class TcpStream const&);
    virtual void close(void);
    virtual bool closing(void);
    bool connect(char*, int);
    virtual void flush(void);
    virtual int getAvailable(void);
    virtual int getPending(void);
    virtual void read(void*, int);
    virtual void write(void*, int);

    WSocket* m_socket; // _08
    u32 m_dwordC;      // _0C
};

#endif
