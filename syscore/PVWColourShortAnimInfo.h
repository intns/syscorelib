#ifndef _PVWCOLOURSHORTANIMINFO_H
#define _PVWCOLOURSHORTANIMINFO_H

#pragma once
#include <types.hpp>

class DllImport PVWColourShortAnimInfo {
public:
    class PVWColourShortAnimInfo& operator=(class PVWColourShortAnimInfo const&);
    void extract(float, class ShortColour&);

    u32 m_dword0; // _00
    u32 m_dword4; // _04
};

EXPECT_SIZE(PVWColourShortAnimInfo, 0x8);

#endif
