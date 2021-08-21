#ifndef _INTERPKEYINFO_H
#define _INTERPKEYINFO_H

#pragma once
#include <types.hpp>

class DllImport InterpKeyInfo {
public:
    class InterpKeyInfo& operator=(class InterpKeyInfo const&);

    u32 m_dword0; // _00
    u32 m_dword4; // _04
    u32 m_dword8; // _08
    u32 m_dwordC; // _0C
};

#endif
