#ifndef _DISPLIST_H
#define _DISPLIST_H

#pragma once
#include "CoreNode.h"

#include "FaceNode.h"

#include <types.hpp>

enum DispListFlags {
    DL_Stripped = 0x1000000, // _1000000
};

class DllImport DispList : public CoreNode {
public:
    DispList(class DispList const&);
    DispList(int);
    DispList(void);
    class DispList& operator=(class DispList const&);
    void exportData(class RandomAccessStream&, unsigned __int32);
    void outputTriData(class RandomAccessStream&, unsigned __int32, bool);
    void prepareTriList(class TriStripifier*);
    virtual void read(class RandomAccessStream&);

    DispListFlags m_flags; // _14
    s32 m_dispDataCount;   // _18
    u8* m_dispData;        // _1C
    s32 m_dword20;         // _20
    s32 m_nodeCount;       // _24
    s32 m_dword28;         // _28
    FaceNode m_face;       // _2C
};

#endif
