#ifndef _PVWKEYINFOS10_H
#define _PVWKEYINFOS10_H

#pragma once
#include <types.hpp>

class DllImport PVWKeyInfoS10 {
public:
    class PVWKeyInfoS10& operator=(class PVWKeyInfoS10 const&);
    bool isSame(class PVWKeyInfoS10&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    u16 m_word0;  // _00
    f32 m_dword4; // _04
    f32 m_dword8; // _08
};

EXPECT_SIZE(PVWKeyInfoS10, 0xC);

#endif
