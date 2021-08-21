#ifndef _TEXTURE_H
#define _TEXTURE_H

#pragma once
#include "TexobjInfo.h"

#include <types.hpp>

class DllImport Texture {
public:
    Texture(class Texture const&);
    Texture(void);
    class Texture& operator=(class Texture const&);
    void createBuffer(int, int, int, void*);
    void decodeData(class TexImg*);
    static void decodeS3TC(int, int, unsigned __int8*, unsigned __int8*);
    void grabBuffer(int, int, bool, bool);
    int offsetGXtoGL(int);
    static int offsetGXtoGL(int, int, int, int);
    void read(class RandomAccessStream&);
    void write(class Stream*);

    virtual void attach(void);
    virtual void detach(void);
    virtual void makeResident(void);

    s16 m_word4;         // _04
    s16 m_wrapFlags;     // _06
    s16 m_width;         // _08
    s16 m_height;        // _0A
    s32 m_tileSizeX;     // _0C
    s32 m_tileSizeY;     // _10
    void* m_pixels;      // _14
    u32* m_textures;     // _18
    f32 m_widthPercent;  // _1C (1 / width)
    f32 m_heightPercent; // _20 (1 / height)
    s32 m_dword24;       // _24
    s32 m_dword28;       // _28
    s32 m_dword2C;       // _2C
    TexobjInfo* m_info;  // _30
};

#endif
