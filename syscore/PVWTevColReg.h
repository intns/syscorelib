#ifndef _PVWTEVCOLREG_H
#define _PVWTEVCOLREG_H

#pragma once
#include "PVWAlphaShortAnimInfo.h"

#include "PVWColourShortAnimInfo.h"

#include "ShortColour.h"

#include <types.hpp>

class DllImport PVWTevColReg {
public:
    PVWTevColReg(void);
    class PVWTevColReg& operator=(class PVWTevColReg const&);
    void animate(float*, class ShortColour&);
    bool isSame(class PVWTevColReg&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    ShortColour m_shortColour0;             // _00
    u32 m_dword8;                           // _08
    f32 m_dwordC;                           // _0C
    PVWColourShortAnimInfo m_shortAnimInfo; // _10
    PVWAlphaShortAnimInfo m_alphaAnimInfo;  // _18
    u32 m_dword20;                          // _20
};

EXPECT_SIZE(PVWTevColReg, 0x24);

#endif
