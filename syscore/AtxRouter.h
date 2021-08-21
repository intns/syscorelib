#ifndef _ATXROUTER_H
#define _ATXROUTER_H

#pragma once
#include <types.hpp>

class DllImport AtxRouter {
public:
    AtxRouter(class AtxRouter const&);
    AtxRouter(void);
    class AtxRouter& operator=(class AtxRouter const&);
    virtual void closeAll(void);
    virtual bool isConnected(void);
    virtual void lock(void);
    virtual void setWindow(unsigned __int32);
    virtual void unlock(void);
};

#endif
