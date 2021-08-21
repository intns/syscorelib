#ifndef _FACENODE_H
#define _FACENODE_H

#pragma once
#include "CoreNode.h"

#include <types.hpp>

class DllImport FaceNode : public CoreNode {
public:
    FaceNode(class FaceNode const&);
    FaceNode(int);
    FaceNode(void);
    class FaceNode& operator=(class FaceNode const&);

    s32 m_faceCount;     // _14
    s32* m_mtxIdx;       // _18
    s32* m_vtxIdx;       // _1C
    s32* m_colIdx;       // _20 assumed name
    s32* m_nrmIdx;       // _24
    s32* m_texcoords[8]; // _28
    s32 m_dword2C;       // _2C
    s32 m_dword30;       // _30
    s32 m_dword34;       // _34
    s32 m_dword38;       // _38
    s32 m_dword3C;       // _3C
    s32 m_dword40;       // _40
    s32 m_dword44;       // _44
};

#endif
