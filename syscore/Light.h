#ifndef _LIGHT_H
#define _LIGHT_H

#pragma once
#include "CoreNode.h"

#include <types.hpp>

class DllImport Light : public CoreNode {
public:
    Light(class Light const&);
    Light(void);
    class Light& operator=(class Light const&);
    float calcLightMapRadius(void);
    float calcLightObjRadius(void);
    void calcLightSizes(void);
    virtual void genAge(class AgeServer&);
    void recalcLighting(class AgeServer&);
    void refresh(class Graphics&, class LFlareGroup*);
    void refreshSection(class AgeServer&);
    void setLightDistAttn(float, float, int);
    void setLightParallel(void);
    void setLightSpot(float, int);
    virtual void updAge(class AgeServer&);
    void update(void);

    u32 m_dword14;      // _14
    u32 m_dword18;      // _18
    u32 m_dword1C;      // _1C
    u32 m_dword20;      // _20
    u32 m_dword24;      // _24
    u32 m_dword28;      // _28
    u32 m_dword2C;      // _2C
    u32 m_dword30;      // _30
    u32 m_dword34;      // _34
    u32 m_dword38;      // _38
    u32 m_dword3C;      // _3C
    u32 m_dword40;      // _40
    u32 m_dword44;      // _44
    u32 m_dword48;      // _48
    u32 m_dword4C;      // _4C
    u32 m_dword50;      // _50
    u32 m_dword54;      // _54
    u32 m_dword58;      // _58
    u32 m_dword5C;      // _5C
    u32 m_dword60;      // _60
    u32 m_dword64;      // _64
    u32 m_dword68;      // _68
    u32 m_dword6C;      // _6C
    u32 m_dword70;      // _70
    s8 m_char74[0x260]; // _74
};

#endif
