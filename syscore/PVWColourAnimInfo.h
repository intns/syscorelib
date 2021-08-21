#ifndef _PVWCOLOURANIMINFO_H
#define _PVWCOLOURANIMINFO_H

#pragma once
#include <types.hpp>

class DllImport PVWColourAnimInfo {
public:
    class PVWColourAnimInfo& operator=(class PVWColourAnimInfo const&);
    void extract(float, class Colour&);

    u32 m_dword0; // _00
    u32 m_dword4; // _04
};

EXPECT_SIZE(PVWColourAnimInfo, 0x8);

#endif
