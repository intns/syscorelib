#ifndef _COLLGROUP_H
#define _COLLGROUP_H

#pragma once
#include <types.hpp>

class DllImport CollGroup {
public:
    CollGroup(void);
    class CollGroup& operator=(class CollGroup const&);

    s32 m_dword00; // _00
    s16 m_dword04; // _04
    s32 m_dword08; // _08
    s32 m_dword0C; // _0C
    s32 m_dword10; // _10
    s32 m_dword14; // _14
    s32 m_dword18; // _18
    s32 m_dword1C; // _1C
    s32 m_dword20; // _20
    s32 m_dword24; // _24
};

#endif
