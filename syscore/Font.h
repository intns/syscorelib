#ifndef _FONT_H
#define _FONT_H

#pragma once
#include <types.hpp>
#include "FontChar.h"


class DllImport Font {
public:
    class Font& operator=(class Font const&);
    int charToIndex(char);
    int charToIndex(unsigned __int16);
    void setTexture(class Texture*, int, int);
    int stringHeight(char*);
    int stringWidth(char*);

    class Texture* m_sourceTex;   // _00
    u32 m_dword4;           // _04
    u32 m_height;           // _08
    FontChar* m_characters; // _0C
    u32 m_dword10;          // _10
    u32 m_dword14;          // _14
    u32 m_dword18;          // _18
};

#endif
