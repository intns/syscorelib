#ifndef _PVWKEYINFOU8_H
#define _PVWKEYINFOU8_H

#pragma once
#include <types.hpp>

class DllImport PVWKeyInfoU8 {
public:
    class PVWKeyInfoU8& operator=(class PVWKeyInfoU8 const&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    u8 m_byte0;   // _00
    f32 m_dword4; // _04
    f32 m_dword8; // _08
};

EXPECT_SIZE(PVWKeyInfoU8, 0xC);

#endif
