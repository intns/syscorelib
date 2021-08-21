#ifndef _PVWTEXTUREDATA_H
#define _PVWTEXTUREDATA_H

#pragma once
#include "Matrix4f.h"

#include "PVWTexAnimInfo.h"

#include <types.hpp>

class DllImport PVWTextureData {
public:
    PVWTextureData(void);
    class PVWTextureData& operator=(class PVWTextureData const&);
    void animate(float*, class Matrix4f&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    u32 m_dword0;                      // _00
    u32 m_dword4;                      // _04
    u32 m_dword8;                      // _08
    u16 m_wordC;                       // _0C
    u16 m_wordE;                       // _0E
    u8 m_byte10;                       // _10
    u8 m_byte11;                       // _11
    u8 m_byte12;                       // _12
    u8 m_byte13;                       // _13
    u8 m_byte14;                       // _14
    u8 m_gap15[7];                     // _15
    f32 m_float1C;                     // _1C
    f32 m_float20;                     // _20
    f32 m_float24;                     // _24
    f32 m_float28;                     // _28
    f32 m_float2C;                     // _2C
    f32 m_float30;                     // _30
    f32 m_float34;                     // _34
    u32 m_dword38;                     // _38
    f32 m_float3C;                     // _3C
    PVWTexAnimInfo m_pvwtexaniminfo40; // _40
    PVWTexAnimInfo m_pvwtexaniminfo48; // _48
    PVWTexAnimInfo m_pvwtexaniminfo50; // _50
    f32 m_dword58;                     // _58
    Matrix4f m_matrix5C;               // _5C
};

EXPECT_SIZE(PVWTextureData, 0x9C);

#endif
