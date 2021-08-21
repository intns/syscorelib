#ifndef _CULLINGPLANE_H
#define _CULLINGPLANE_H

#pragma once
#include "Plane.h"

#include <types.hpp>

class DllImport CullingPlane : public Plane {
public:
    CullingPlane(class CullingPlane const&);
    CullingPlane(void);
    class CullingPlane& operator=(class CullingPlane const&);
    void CheckMinMaxDir(void);

    u32 m_dword10; // _10
    u32 m_dword14; // _14
    u32 m_dword18; // _18
    u32 m_dword1C; // _1C
    u32 m_dword20; // _20
    u32 m_dword24; // _24
    u8 m_byte28;   // _28
};

#endif
