#ifndef _MEMHEAD_H
#define _MEMHEAD_H

#pragma once
#include <types.hpp>

class DllImport MemHead {
public:
    class MemHead& operator=(class MemHead const&);

    u32 m_dword0; // _00
    u32 m_dword4; // _04
    u32 m_dword8; // _08
    u32 m_dwordC; // _0C
};

#endif
