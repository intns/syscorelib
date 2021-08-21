#ifndef _ANMOBJINFO_H
#define _ANMOBJINFO_H

#pragma once
#include "GfxobjInfo.h"

#include <types.hpp>

class DllImport AnmobjInfo : public GfxobjInfo {
public:
    AnmobjInfo(class AnmobjInfo const&);
    AnmobjInfo(void);
    class AnmobjInfo& operator=(class AnmobjInfo const&);
    virtual void detach(void);

    class AnimData* m_target; // _20
};

EXPECT_SIZE(AnmobjInfo, 0x24);

#endif
