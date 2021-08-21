#ifndef _WSOCKET_H
#define _WSOCKET_H

#pragma once
#include <types.hpp>

class DllImport WSocket {
public:
    class WSocket& operator=(class WSocket const&);
    bool checkForConnections(void);
    void close(void);
    int closing(void);
    void connect(void);
    bool create(char*, int);
    void flushWrite(void);
    static void init(void);
    bool open(char*, int);
    int pending(void);
    void read(void*, int);
    void setASync(struct HWND__*, unsigned __int32, unsigned __int32, int);
    void write(void*, int);

    SOCKET m_listeningSocket; // _00
    SOCKET m_activeSocket;    // _04
};

#endif
