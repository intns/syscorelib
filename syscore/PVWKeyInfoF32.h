#ifndef _PVWKEYINFOF32_H
#define _PVWKEYINFOF32_H

#pragma once
#include <types.hpp>

class DllImport PVWKeyInfoF32 {
public:
    class PVWKeyInfoF32& operator=(class PVWKeyInfoF32 const&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    f32 m_frameA; // _00
    f32 m_frameB; // _04
    f32 m_frameC; // _08
};

EXPECT_SIZE(PVWKeyInfoF32, 0xC);

#endif
