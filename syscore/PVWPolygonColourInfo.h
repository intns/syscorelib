#ifndef _PVWPOLYGONCOLOURINFO_H
#define _PVWPOLYGONCOLOURINFO_H

#pragma once
#include "Colour.h"

#include "PVWAlphaAnimInfo.h"

#include "PVWColourAnimInfo.h"

#include <types.hpp>

class DllImport PVWPolygonColourInfo : public Colour {
public:
    PVWPolygonColourInfo(void);
    class PVWPolygonColourInfo& operator=(class PVWPolygonColourInfo const&);
    void animate(float*, class Colour&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    u32 m_dword4;             // _04
    f32 m_dword8;             // _08
    PVWColourAnimInfo m_unk1; // _0C
    PVWAlphaAnimInfo m_unk2;  // _14
    f32 m_dword1C;            // _1C
};

EXPECT_SIZE(PVWPolygonColourInfo, 0x20);

#endif
