#ifndef _CACHETEXTURE_H
#define _CACHETEXTURE_H

#pragma once
#include "Texture.h"

#include <types.hpp>

class DllImport CacheTexture : public Texture {
public:
    CacheTexture(class CacheTexture const&);
    CacheTexture(void);
    class CacheTexture& operator=(class CacheTexture const&);
    virtual void makeResident(void);

    u32 m_dword34; // _34
    u32 m_dword38; // _38
    u32 m_dword3C; // _3C
    u32 m_dword40; // _40
};

#endif
