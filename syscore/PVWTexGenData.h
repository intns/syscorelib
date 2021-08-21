#ifndef _PVWTEXGENDATA_H
#define _PVWTEXGENDATA_H

#pragma once
#include <types.hpp>

class DllImport PVWTexGenData {
public:
    class PVWTexGenData& operator=(class PVWTexGenData const&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    u8 m_byte0; // _00
    u8 m_byte1; // _01
    u8 m_byte2; // _02
    u8 m_byte3; // _03
};

EXPECT_SIZE(PVWTexGenData, 0x4);

#endif
