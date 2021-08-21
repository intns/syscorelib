#ifndef _CONTROLLERMGR_H
#define _CONTROLLERMGR_H

#pragma once
#include <types.hpp>

class DllImport ControllerMgr {
public:
    ControllerMgr(class ControllerMgr const&);
    ControllerMgr(void);
    class ControllerMgr& operator=(class ControllerMgr const&);
    virtual bool keyDown(int);
    void update(void);
    void updateController(class Controller*);

    u8 m_keyState[0x100]; // _04
};

#endif
