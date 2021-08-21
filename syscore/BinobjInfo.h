#ifndef _BINOBJINFO_H
#define _BINOBJINFO_H

#pragma once
#include "GfxobjInfo.h"

#include <types.hpp>

class DllImport BinobjInfo : public GfxobjInfo {
public:
    BinobjInfo(class BinobjInfo const&);
    BinobjInfo(void);
    class BinobjInfo& operator=(class BinobjInfo const&);

    char* m_target; // _20 data of the binary object
};

#endif
