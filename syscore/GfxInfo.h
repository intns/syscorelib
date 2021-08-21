#ifndef _GFXINFO_H
#define _GFXINFO_H

#pragma once
#include <types.hpp>
#include "BoundBox.h"

#include "CollTriInfo.h"


class DllImport GfxInfo : public BoundBox {
public:
    GfxInfo(class GfxInfo const&);
    GfxInfo(void);
    class GfxInfo& operator=(class GfxInfo const&);
    void createCollData(class Vector3f*, float);

    u32 m_dword18;           // _18
    u32 m_dword1C;           // _1C
    CollTriInfo* m_collTris; // _20
    u32 m_dword24;           // _24
    u32 m_dword28;           // _28
};

#endif
