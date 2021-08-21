#ifndef _ANIMCONTEXT_H
#define _ANIMCONTEXT_H

#pragma once
#include "AnimData.h"
#include <types.hpp>

class DllImport AnimContext {
public:
    AnimContext(class AnimContext const&);
    AnimContext(class AnimData*);
    AnimContext(void);
    class AnimContext& operator=(class AnimContext const&);
    void setState(class AnimData*, float);

    virtual void animate(float);

    AnimData* m_animData0; // _04
    AnimData* m_state;     // _08
    f32 m_frame;           // _0C defaults to 30
};

EXPECT_SIZE(AnimContext, 0x10);

#endif
