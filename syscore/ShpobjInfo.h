#ifndef _SHPOBJINFO_H
#define _SHPOBJINFO_H

#pragma once
#include "GfxobjInfo.h"

#include <types.hpp>

class DllImport ShpobjInfo : public GfxobjInfo {
public:
    ShpobjInfo(class ShpobjInfo const&);
    ShpobjInfo(void);
    class ShpobjInfo& operator=(class ShpobjInfo const&);

    class Shape* m_target; // _20
};

#endif
