#ifndef _DRAWINFO_H
#define _DRAWINFO_H

#pragma once
#include <types.hpp>

class DllImport DrawInfo {
public:
    DrawInfo(void);
    class DrawInfo& operator=(class DrawInfo const&);

    u32 m_dword0; // _00
    u32 m_dword4; // _04
    u32 m_dword8; // _08
};

#endif
