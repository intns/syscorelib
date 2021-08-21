#ifndef _PVWLIGHTINGINFO_H
#define _PVWLIGHTINGINFO_H

#pragma once
#include <types.hpp>

class DllImport PVWLightingInfo {
public:
    PVWLightingInfo(void);
    class PVWLightingInfo& operator=(class PVWLightingInfo const&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    u32 m_dword0; // _00
    u32 m_dword4; // _04
    f32 m_dword8; // _08
};

EXPECT_SIZE(PVWLightingInfo, 0xC);

#endif
