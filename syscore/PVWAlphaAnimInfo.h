#ifndef _PVWALPHAANIMINFO_H
#define _PVWALPHAANIMINFO_H

#pragma once
#include <types.hpp>

class DllImport PVWAlphaAnimInfo {
public:
    class PVWAlphaAnimInfo& operator=(class PVWAlphaAnimInfo const&);
    void extract(float, class Colour&);

    u32 m_dword0; // _00
    u32 m_dword4; // _04
};

EXPECT_SIZE(PVWAlphaAnimInfo, 0x8);

#endif
