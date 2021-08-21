#ifndef _TEXTURECACHER_H
#define _TEXTURECACHER_H

#pragma once
#include <types.hpp>

class DllImport TextureCacher {
public:
    TextureCacher(unsigned __int32);
    class TextureCacher& operator=(class TextureCacher const&);
    void cacheTexture(class CacheTexture*);
    void purgeAll(void);
    void removeOldest(void);
    void updateInfo(class CacheTexture*);
};

#endif
