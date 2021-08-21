#ifndef _LIGHTGROUP_H
#define _LIGHTGROUP_H

#pragma once
#include "Colour.h"

#include "CoreNode.h"

#include "Joint.h"

#include "LFlareGroup.h"

#include "LightFlare.h"

#include "Texture.h"

#include <types.hpp>

class DllImport LightGroup : public CoreNode {
public:
    LightGroup(class LightGroup const&);
    LightGroup(void);
    class LightGroup& operator=(class LightGroup const&);
    void addLight(class Vector3f&, float);
    void ageAddFlare(class AgeServer&);
    void ageChangeTexture(class AgeServer&);
    void ageDel(class AgeServer&);
    virtual void genAge(class AgeServer&);
    void loadini(class CmdStream*);
    void refresh(class Graphics&, class Matrix4f*);
    void saveini(char*, class RandomAccessStream&);

    s32 m_flags;               // _14
    s32 m_type;                // _18
    Joint* m_joint;            // _1C
    Texture* m_texture;        // _20
    Vector3f m_direction;      // _24
    Colour m_lightColour;      // _30
    s8* m_texSource;           // _34
    s8* m_matSource;           // _38
    Texture* m_haloTex;        // _3C
    LightFlare m_flares;       // _40
    s32 m_dword64;             // _64 material?
    LFlareGroup* m_flareGroup; // _68
};

EXPECT_SIZE(LightGroup, 0x6C);

#endif
