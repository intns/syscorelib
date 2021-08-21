#ifndef _TEXOBJINFO_H
#define _TEXOBJINFO_H

#pragma once
#include "GfxobjInfo.h"

#include <types.hpp>

class DllImport TexobjInfo : public GfxobjInfo {
public:
    TexobjInfo(class TexobjInfo const&);
    TexobjInfo(void);
    class TexobjInfo& operator=(class TexobjInfo const&);
    virtual void attach(void);
    virtual void detach(void);

    class Texture* m_target; // _20
};

#endif
