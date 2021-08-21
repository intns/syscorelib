#ifndef _MTXGROUP_H
#define _MTXGROUP_H

#pragma once
#include "DispList.h"

#include <types.hpp>

class DllImport MtxGroup {
public:
    MtxGroup(void);
    class MtxGroup& operator=(class MtxGroup const&);
    void exportData(class RandomAccessStream&, unsigned __int32);
    void read(class RandomAccessStream&);

    s32 m_depCount;           // _00 dependency count
    s32* m_deps;              // _04 dependencies
    s32 m_dlCount;            // _08 display list count
    DispList* m_displayLists; // _0C
};

#endif
