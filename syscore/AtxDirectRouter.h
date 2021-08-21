#ifndef _ATXDIRECTROUTER_H
#define _ATXDIRECTROUTER_H

#pragma once
#include "AtxRouter.h"

#include <types.hpp>

class DllImport AtxDirectRouter : public AtxRouter {
public:
    AtxDirectRouter(class AtxDirectRouter const&);
    AtxDirectRouter(char*);
    class AtxDirectRouter& operator=(class AtxDirectRouter const&);
    virtual bool openRoute(class AtxStream*, int);
    virtual void closeRoute(class AtxStream*);
    virtual void lock(void);
    virtual void unlock(void);
    virtual void closeAll(void);
    virtual void reset(void);
    virtual bool isConnected(void);
    virtual void setWindow(unsigned __int32);

    char* m_hostname;                 // _04
    int m_dword8;                     // _08
    char m_byteC;                     // _0C
    bool m_connected;                 // _0D
    class TcpStream* m_networkStream; // _10
};

#endif
