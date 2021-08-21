#ifndef _GRAPHICS_H
#define _GRAPHICS_H

#pragma once
#include "Colour.h"

#include "Light.h"

#include "Vector3f.h"

#include <types.hpp>

class DllImport Graphics {
public:
    Graphics(class Graphics const&);
    Graphics(void);
    class Graphics& operator=(class Graphics const&);
    void addLight(class Light*);
    void cacheShape(class BaseShape*, class ShapeDynMaterials*);
    int calcBoxLighting(class BoundBox&);
    int calcLighting(float);
    int calcSphereLighting(class Vector3f&, float);
    void drawCircle(class Vector3f&, float, class Matrix4f&);
    void drawCylinder(class Vector3f&, class Vector3f&, float, class Matrix4f&);
    void drawSphere(class Vector3f&, float, class Matrix4f&);
    void flushCachedShapes(void);
    virtual void genAge(class AgeServer&);
    class Matrix4f* getMatrices(int);
    virtual void getVerticalFilter(unsigned __int8*);
    virtual void initRender(int, int);
    virtual void perspPrintf(class Font*, class Vector3f&, int, int, char*, ...);
    void resetCacheBuffer(void);
    void resetLights(void);
    void resetMatrixBuffer(void);
    virtual void setAmbient(void);
    virtual void setBlendMode(unsigned __int8, unsigned __int8, unsigned __int8);
    virtual void setLightcam(class LightCamera*);
    virtual void setMatHandler(class MaterialHandler*);
    virtual void setVerticalFilter(unsigned __int8*);
    virtual void testRectangle(class RectArea&);
    virtual void useDList(unsigned __int32);
    virtual void useMaterial(class Material*);
    virtual void videoReset(void);

    u32 m_dword4;                         // _04
    u32 m_dword8;                         // _08
    u32 m_dwordC;                         // _0C
    u32 m_dword10;                        // _10
    Light m_light;                        // _14
    u32 m_dword2E8;                       // _2E8
    u32 m_dword2EC;                       // _2EC
    u32 m_dword2F0;                       // _2F0
    u32 m_dword2F4;                       // _2F4
    u32 m_dword2F8;                       // _2F8
    u32 m_dword2FC;                       // _2FC
    u32 m_dword300;                       // _300
    u32 m_dword304;                       // _304
    u32 m_dword308;                       // _308
    u32 m_dword30C;                       // _30C
    u32 m_dword310;                       // _310
    u32 m_dword314;                       // _314
    Colour m_colour318;                   // _318
    Colour m_colour31C;                   // _31C
    Colour m_colour320;                   // _320
    s8 m_byte324;                         // _324
    s8 m_byte325;                         // _325
    u32 m_dword328;                       // _328
    u32 m_dword32C;                       // _32C
    u32 m_dword330;                       // _330
    u32 m_dword334;                       // _334
    u32 m_dword338;                       // _338
    LightCamera* m_lightCam;              // _33C
    Vector3f m_vector340;                 // _340
    u32 m_dword34C;                       // _34C
    MaterialHandler* m_dword350;          // _350
    MaterialHandler* m_currentMatHandler; // _354
    u32 m_dword358;                       // _358
    u32 m_dword35C;                       // _35C
    u32 m_dword360;                       // _360
    u32 m_dword364;                       // _364
    Colour m_colour368;                   // _368
    Colour m_colour36C;                   // _36C
    Colour m_dword370;                    // _370
    f32 m_dword374;                       // _374
    f32 m_dword378;                       // _378
    u32 m_dword37C;                       // _37C
    u32 m_dword380;                       // _380
    u32 m_dword384;                       // _384
    u32 m_dword388;                       // _388
    u32 m_dword38C;                       // _38C
    u32 m_matrixBuffer;                   // _390
    char m_394[0x24];                     // _394
};

EXPECT_SIZE(Graphics, 0x394 + 0x24);

#endif
