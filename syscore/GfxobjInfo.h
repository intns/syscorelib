#ifndef _GFXOBJINFO_H
#define _GFXOBJINFO_H

#pragma once
#include "ID32.h"

#include <types.hpp>

class DllImport GfxobjInfo {
public:
    GfxobjInfo(class GfxobjInfo const&);
    GfxobjInfo(void);
    class GfxobjInfo& operator=(class GfxobjInfo const&);
    virtual void attach(void);
    virtual void detach(void);
    void insertAfter(class GfxobjInfo*);
    void remove(void);

    GfxobjInfo* m_previous; // _04
    GfxobjInfo* m_next;     // _08
    s8* m_str;              // _0C
    ID32 m_id;              // _10
    s32 m_attached;         // _1C
};

#endif
