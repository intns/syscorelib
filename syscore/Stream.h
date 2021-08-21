#ifndef _STREAM_H
#define _STREAM_H

#pragma once
#include <types.hpp>

class DllImport Stream {
public:
    Stream(class Stream const&);
    Stream(void);
    class Stream& operator=(class Stream const&);

    virtual int readInt(void);
    virtual char readByte(void);
    virtual short readShort(void);
    virtual float readFloat(void);
    virtual char* readString(void);
    virtual void readString(class String&);
    virtual void readString(char*, int);
    virtual void writeInt(int);
    virtual void writeByte(unsigned __int8);
    virtual void writeShort(short);
    virtual void writeFloat(float);
    virtual void writeString(class String&);
    virtual void writeString(char*);
    virtual void read(void*, int);
    virtual void write(void*, int);
    virtual int getPending(void);
    virtual int getAvailable(void);
    virtual void close(void);
    virtual bool getClosing(void);
    virtual void flush(void);

    void print(char*, ...);
    void vPrintf(char*, char*);

    char* m_source; // _04
};

#endif
