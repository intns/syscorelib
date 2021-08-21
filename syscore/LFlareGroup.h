#ifndef _LFLAREGROUP_H
#define _LFLAREGROUP_H

#pragma once
#include "CoreNode.h"

#include "Texture.h"

#include <types.hpp>

class DllImport LFlareGroup : public CoreNode {
public:
    LFlareGroup(class LFlareGroup const&);
    LFlareGroup(void);
    class LFlareGroup& operator=(class LFlareGroup const&);
    void addLFlare(class Colour&, class Vector3f&, class Vector2f&, class Vector2f*, class Vector2f*);

    u32 m_dword14;      // _14
    Texture* m_texture; // _18
    u32 m_dword1C;      // _1C
    u32 m_dword20;      // _20
    u32 m_dword24;      // _24
};

EXPECT_SIZE(LFlareGroup, 0x28);

#endif
