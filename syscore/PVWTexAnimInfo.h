#ifndef _PVWTEXANIMINFO_H
#define _PVWTEXANIMINFO_H

#pragma once
#include <types.hpp>

class DllImport PVWTexAnimInfo {
public:
    class PVWTexAnimInfo& operator=(class PVWTexAnimInfo const&);
    void extract(float, class Vector3f&);

    u32 m_dword0; // _00
    u32 m_dword4; // _04
};

EXPECT_SIZE(PVWTexAnimInfo, 0x8);

#endif
