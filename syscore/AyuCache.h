#ifndef _AYUCACHE_H
#define _AYUCACHE_H

#pragma once
#include <types.hpp>

class DllImport AyuCache {
public:
    AyuCache(unsigned __int32);
    class AyuCache& operator=(class AyuCache const&);
    void cacheFree(void*);
    void deleteIdAll(unsigned __int32);
    int getIndex(void);
    void init(unsigned __int32, unsigned __int32);
    bool isEmpty(void);
    void* mallocL(unsigned __int32);
    void releaseIndex(int);

    char _00[0x130]; // _00
};

#endif
