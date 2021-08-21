#ifndef _PVWALPHASHORTANIMINFO_H
#define _PVWALPHASHORTANIMINFO_H

#pragma once
#include <types.hpp>

class DllImport PVWAlphaShortAnimInfo {
public:
    class PVWAlphaShortAnimInfo& operator=(class PVWAlphaShortAnimInfo const&);
    void extract(float, class ShortColour&);

    u32 m_dword0; // _00
    u32 m_dword4; // _04
};

EXPECT_SIZE(PVWAlphaShortAnimInfo, 0x8);

#endif
