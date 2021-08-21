#ifndef _FONTCHAR_H
#define _FONTCHAR_H

#pragma once
#include <types.hpp>
#include "RectArea.h"


class DllImport FontChar {
public:
    FontChar(void);
    class FontChar& operator=(class FontChar const&);

    u16 m_word0;        // _00
    u16 m_word2;        // _02
    u16 m_word4;        // _04
    u16 m_word6;        // _06
    s32 m_dword8;       // _08
    RectArea rectareaC; // _0C
};

#endif
