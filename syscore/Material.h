#ifndef _MATERIAL_H
#define _MATERIAL_H

#pragma once
#include "CoreNode.h"

#include "PVWLightingInfo.h"

#include "PVWPeInfo.h"

#include "PVWPolygonColourInfo.h"

#include <types.hpp>
#include "PVWTextureInfo.h"


class DllImport Material : public CoreNode {
public:
    Material(class Material const&);
    Material(void);
    class Material& operator=(class Material const&);
    class Colour& Colour(void);
    virtual void attach(void);
    virtual void genAge(class AgeServer&);
    void getColour(class Colour&);
    virtual void read(class RandomAccessStream&);
    void setColour(class Colour&);
    virtual void write(class RandomAccessStream&);

    u32 m_dword14;                                 // _14
    u32 m_dword18;                                 // _18
    u32 m_dword1C;                                 // _1C
    u32 m_dword20;                                 // _20
    u32 m_dword24;                                 // _24
    u32 m_dword28;                                 // _28
    PVWPolygonColourInfo m_pvwpolygoncolourinfo2C; // _2C
    PVWLightingInfo m_pvwlightinginfo4C;           // _4C
    PVWPeInfo m_pvwpeinfo58;                       // _58
    PVWTextureInfo m_pvwtextureinfo68;             // _68
    u32 m_dword8C;                                 // _8C
};

#endif
