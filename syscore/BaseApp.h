#ifndef _BASEAPP_H
#define _BASEAPP_H

#pragma once
#include "AtxCommandStream.h"

#include "Node.h"

#include <types.hpp>

class DllImport BaseApp : public Node {
public:
    BaseApp(class BaseApp const&);
    BaseApp(void);
    class BaseApp& operator=(class BaseApp const&);
    int idleupdate(void);
    float rnd(float);
    float rnd(void);
    void startAgeServer(void);
    void stopAgeServer(void);

    virtual void genAge(class AgeServer&);

    virtual ~BaseApp(void);
    virtual void InitApp(char*);
    virtual int idle(void);
    virtual bool keyDown(int, int, int);
    virtual void softReset(void);
    virtual void useHeap(int);
    virtual void procCmd(char*);

    AtxCommandStream* m_commands; // _20
    AgeServer* m_server;          // _24
    s8 m_byte28;                  // _28
    s32 m_dword2C;                // _2C
    Node m_windowNode;            // _30
    u32 m_heapIdx;                // _50
};

#endif
