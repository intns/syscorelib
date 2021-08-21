#ifndef _CONTROLLER_H
#define _CONTROLLER_H

#pragma once
#include "Node.h"

#include <types.hpp>

class DllImport Controller : public Node {
public:
    Controller(class Controller const&);
    Controller(unsigned __int32);
    class Controller& operator=(class Controller const&);
    float getMainStickX(void);
    float getMainStickY(void);
    float getSubStickX(void);
    float getSubStickY(void);
    void initialise(unsigned __int32);
    bool keyClick(unsigned __int32);
    bool keyDoubleClick(unsigned __int32);
    bool keyDown(unsigned __int32);
    bool keyUnClick(unsigned __int32);
    bool keyUp(unsigned __int32);
    void reset(unsigned __int32);
    virtual void update(void);
    void updateCont(unsigned __int32);

    u32 m_dword20; // _20
    u32 m_dword24; // _24
    u32 m_dword28; // _28
    u32 m_dword2C; // _2C
    u32 m_dword30; // _30
    u32 m_dword34; // _34
    u32 m_dword38; // _38
    u32 m_dword3C; // _3C
    u32 m_dword40; // _40
    u8 m_byte44;   // _44
    u8 m_byte45;   // _45
    u8 m_byte46;   // _46
    u8 m_byte47;   // _47
    u8 m_byte48;   // _48
    u8 m_byte49;   // _49
    u8 m_byte4A;   // _4A
    u8 m_byte4B;   // _4B
    u8 m_byte4C;   // _4C
};

#endif
