#ifndef _MESH_H
#define _MESH_H

#pragma once
#include "CoreNode.h"

#include "Joint.h"

#include "MtxGroup.h"

#include <types.hpp>

enum VCDFlags {
    VCD_UseEmboss = 0x1000, // _1000
    VCD_NBT = 0x10000,      // _10000
};

class DllImport Mesh : public CoreNode {
public:
    Mesh(class Mesh const&);
    Mesh(void);
    class Mesh& operator=(class Mesh const&);
    void exportData(class RandomAccessStream&);
    virtual void read(class RandomAccessStream&);

    s32 m_index;              // _14
    s32 m_usingEmbossBump;    // _18
    s32 m_dependencyIdx;      // _1C
    s32 m_mtxGroupCount;      // _20
    class MtxGroup* m_groups; // _24
    class Joint* m_joint;     // _28
    VCDFlags m_vcd;           // _2C
};

#endif
