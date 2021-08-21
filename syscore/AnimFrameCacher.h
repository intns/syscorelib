#ifndef _ANIMFRAMECACHER_H
#define _ANIMFRAMECACHER_H

#pragma once
#include "AyuCache.h"

#include "CacheInfo.h"

#include <types.hpp>

class DllImport AnimFrameCacher {
public:
    AnimFrameCacher(int);
    class AnimFrameCacher& operator=(class AnimFrameCacher const&);
    void cacheFrameSpace(int, class AnimCacheInfo*);
    void removeOldest(void);
    void updateInfo(class AnimCacheInfo*);

    AyuCache* m_ayuCache0;    // _00
    CacheInfo* m_cacheInfo4;  // _04
    CacheInfo* m_cacheInfo8;  // _08
    u32 m_dwordC;             // _0C
    CacheInfo* m_cacheInfo10; // _10
    u32 m_dword14;            // _14
};

EXPECT_SIZE(AnimFrameCacher, 0x18);

#endif
