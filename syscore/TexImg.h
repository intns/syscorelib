#ifndef _TEXIMG_H
#define _TEXIMG_H

#pragma once
#include "CoreNode.h"

#include <types.hpp>

enum TexImgFormat {
    TEX_FMT_RGB565, // _00
    TEX_FMT_S3TC,   // _01
    TEX_FMT_RGB5A3, // _02
    TEX_FMT_I4,     // _03
    TEX_FMT_I8,     // _04
    TEX_FMT_IA4,    // _05
    TEX_FMT_IA8,    // _06
    TEX_FMT_RGBA8   // _07
};

class DllImport TexImg : public CoreNode {
public:
    TexImg(class TexImg const&);
    TexImg(void);
    class TexImg& operator=(class TexImg const&);
    static int calcDataSize(int, int, int);
    void dumpBti(class Texture*, char*, class RandomAccessStream&, class RandomAccessStream&);
    char* formatName(unsigned __int32);
    static void getTileSize(int, unsigned __int32&, unsigned __int32&);
    void importBti(class Texture*, class RandomAccessStream&, unsigned __int8*);
    void importTxe(class Texture*, class RandomAccessStream&);
    void readTexData(class Texture*, class RandomAccessStream&, unsigned __int8*);
    void setColour(class Colour&);

    virtual void read(class RandomAccessStream&);
    virtual void write(class RandomAccessStream&);

    s32 m_index;           // _14
    TexImgFormat m_format; // _18
    s32 m_width;           // _1C
    s32 m_height;          // _20
    s32 m_dword24;         // _24
    s32 m_dataSize;        // _28
    void* m_texData;       // _2C
    void* m_pixels;        // _30
};

#endif
