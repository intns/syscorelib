#ifndef _PVWPEINFO_H
#define _PVWPEINFO_H

#pragma once
#include <types.hpp>

class DllImport PVWPeInfo {
public:
    class PVWPeInfo& operator=(class PVWPeInfo const&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    u32 m_dword0; // _00
    u32 m_dword4; // _04
    u32 m_dword8; // _08
    u32 m_dwordC; // _0C
};

EXPECT_SIZE(PVWPeInfo, 0x10);

#endif
