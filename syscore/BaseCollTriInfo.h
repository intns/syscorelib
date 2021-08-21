#ifndef _BASECOLLTRIINFO_H
#define _BASECOLLTRIINFO_H

#pragma once
#include "Plane.h"

#include <types.hpp>

class DllImport BaseCollTriInfo {
public:
    BaseCollTriInfo(class BaseCollTriInfo const&);
    BaseCollTriInfo(void);
    class BaseCollTriInfo& operator=(class BaseCollTriInfo const&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    s32 m_mapCode; // _00
    s32 m_dword4;  // _04
    s32 m_dword8;  // _08
    s32 m_dwordC;  // _0C
    s16 word10;    // _10
    s16 word12;    // _12
    s16 word14;    // _14
    s16 word16;    // _16
    Plane m_plane; // _18
};

#endif
