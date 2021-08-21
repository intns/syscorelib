#ifndef _ANIMCACHEINFO_H
#define _ANIMCACHEINFO_H

#pragma once
#include "CacheInfo.h"
#include <types.hpp>

class DllImport AnimCacheInfo {
public:
    AnimCacheInfo(void);
    class AnimCacheInfo& operator=(class AnimCacheInfo const&);
    void initData(void);

    s32 m_dword0;             // _00
    s32 m_dword4;             // _04
    s32 m_dword8;             // _08
    s32 m_dwordC;             // _0C
    CacheInfo* m_cacheInfo10; // _10
    s32 m_dword14;            // _14
    s32 m_dword18;            // _18
};

EXPECT_SIZE(AnimCacheInfo, 0x1C);

#endif
