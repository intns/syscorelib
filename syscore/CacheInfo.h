#ifndef _CACHEINFO_H
#define _CACHEINFO_H

#pragma once
#include <types.hpp>

class DllImport CacheInfo {
public:
    class CacheInfo& operator=(class CacheInfo const&);
    void insertAfter(class CacheInfo*);
    void remove(void);

    s32 m_dword0;            // _00
    CacheInfo* m_cacheInfo4; // _04
    CacheInfo* m_cacheInfo8; // _08
    s32 m_dwordC;            // _0C
    s32 m_dword10;           // _10
    s32 m_dword14;           // _14
};

#endif
