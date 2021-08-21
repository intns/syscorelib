#ifndef _FNTOBJINFO_H
#define _FNTOBJINFO_H

#pragma once
#include "GfxobjInfo.h"

#include <types.hpp>

class DllImport FntobjInfo : public GfxobjInfo {
public:
    FntobjInfo(class FntobjInfo const&);
    FntobjInfo(void);
    class FntobjInfo& operator=(class FntobjInfo const&);

    class Font* m_target; // _20
};

#endif
