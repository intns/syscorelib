#ifndef _PVWTEXTUREINFO_H
#define _PVWTEXTUREINFO_H

#pragma once
#include "PVWTexGenData.h"

#include "PVWTextureData.h"

#include "Vector3f.h"

#include <types.hpp>

class DllImport PVWTextureInfo {
public:
    PVWTextureInfo(class PVWTextureInfo const&);
    PVWTextureInfo(void);
    class PVWTextureInfo& operator=(class PVWTextureInfo const&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    Vector3f m_vector0;            // _00
    u32 m_tdCount;                 // _0C texture data count
    u32 m_tgDataCount;             // _10 texture generation data count
    u32 m_dword14;                 // _14
    u32 m_dword18;                 // _18
    PVWTextureData* m_textureData; // _1C
    PVWTexGenData* m_texGenData;   // _20
};

EXPECT_SIZE(PVWTextureInfo, 0x24);

#endif
