#ifndef _ANIMJOINT_H
#define _ANIMJOINT_H

#pragma once
#include <types.hpp>

class DllImport AnimJoint {
public:
    AnimJoint(void);
    class AnimJoint& operator=(class AnimJoint const&);

    char m_byte0[0x24]; // _00
};

EXPECT_SIZE(AnimJoint, 0x24);

#endif
