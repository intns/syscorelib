#ifndef _PVWCOMBINER_H
#define _PVWCOMBINER_H

#pragma once
#include <types.hpp>

class DllImport PVWCombiner {
public:
    class PVWCombiner& operator=(class PVWCombiner const&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    u8 m_byte0; // _00
    u8 m_byte1; // _01
    u8 m_byte2; // _02
    u8 m_byte3; // _03
    u8 m_byte4; // _04
    u8 m_byte5; // _05
    u8 m_byte6; // _06
    u8 m_byte7; // _07
    u8 m_byte8; // _08
    u8 m_byte9; // _09
    u8 m_byteA; // _0A
    u8 m_byteB; // _0B
};

EXPECT_SIZE(PVWCombiner, 0xC);

#endif
