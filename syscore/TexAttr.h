#ifndef _TEXATTR_H
#define _TEXATTR_H

#pragma once
#include "CoreNode.h"

#include "Texture.h"

#include "TexImg.h"

#include <types.hpp>

class DllImport TexAttr : public CoreNode {
public:
    TexAttr(class TexAttr const&);
    TexAttr(void);
    class TexAttr& operator=(class TexAttr const&);
    void initImage(void);
    virtual void read(class RandomAccessStream&);
    virtual void write(class RandomAccessStream&);

    s32 m_index;        // _14
    s32 m_texNum;       // _18
    s16 m_tiling;       // _1C
    s16 m_flags;        // _1E
    s16 m_word20;       // _20
    s16 m_word22;       // _22
    f32 m_dword24;      // _24
    s8* m_name;         // _28
    Texture* m_texture; // _2C
    TexImg* m_image;    // _30
};

#endif
