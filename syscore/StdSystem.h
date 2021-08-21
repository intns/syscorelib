#ifndef _STDSYSTEM_H
#define _STDSYSTEM_H

#pragma once
#include "AyuHeap.h"

#include "BaseShape.h"

#include "CoreNode.h"

#include "Font.h"

#include "GfxobjInfo.h"

#include "Matrix4f.h"

#include "TextureCacher.h"

#include "Timers.h"

#include <types.hpp>

enum TimerState {
    TS_Off = 0, // _00
    TS_On,      // _01
    TS_Full     // _02
};

class DllImport StdSystem {
public:
    StdSystem(class StdSystem const&);
    StdSystem(void);
    class StdSystem& operator=(class StdSystem const&);
    void Shutdown(void);
    void addAnimation(class AnimData*, char*);
    void addGfxObject(class GfxobjInfo*);
    void addTexture(class Texture*, char*);
    void ageAnyAnimations(class AgeServer&, char*);
    void attachObjs(void);
    void detachObjs(void);
    class AnimData* findAnimation(char*);
    class AnimData* findAnyAnimation(char*);
    class GfxobjInfo* findAnyGfxObject(char*, unsigned __int32);
    int findAnyIndex(char*, char*);
    class GfxobjInfo* findGfxObject(char*, unsigned __int32);
    class AnimData* findIndexAnimation(char*, int);
    class GfxobjInfo* findTexture(class Texture*);
    void flushLFlares(class Graphics&);
    void genAge(class AgeServer&);
    void getAppMemory(char*);
    float getFade(void);
    float getHalfRand(float);
    class AyuHeap* getHeap(int);
    int getHeapNum(void);
    class LFInfo* getLFlareInfo(void);
    float getRand(float);
    class Shape* getShape(char*, char*, char*, bool);
    void initLFlares(int);
    void invalidateObjs(unsigned __int32, unsigned __int32);
    bool isActive(void);
    bool isShutdown(void);
    class AnimData* loadAnimation(class Shape*, char*, bool);
    void loadBundle(char*, bool);
    class Shape* loadShape(char*, bool);
    class Texture* loadTexture(char*, bool);
    void onceInit(void);
    class LFlareGroup* registerLFlare(class Texture*);
    void resetHeap(int, int);
    void resetLFlares(void);
    bool resetPending(void);
    void set2DRoot(char*, char*);
    void setActive(bool);
    void setDataRoot(char*);
    void setFade(float, float);
    void setFrameClamp(int);
    int setHeap(int);
    void setTextureBase(char*, char*);
    void softReset(void);
    static char* stringDup(char*);

    virtual void initSoftReset(void);
    virtual class RandomAccessStream* openFile(char*, bool, bool);
    virtual void copyRamToCache(unsigned __int32, unsigned __int32, unsigned __int32);
    virtual void copyCacheToRam(unsigned __int32, unsigned __int32, unsigned __int32);
    virtual void copyWaitUntilDone(void);
    virtual void copyCacheToTexture(class CacheTexture*);
    virtual void Activate(bool);
    virtual void parseArchiveDirectory(char*, char*);
    virtual void sndPlaySe(unsigned __int32) = 0;
    virtual void startLoading(class LoadIdler*, bool, unsigned __int32);
    virtual void endLoading(void);

    bool m_pending;            // _04
    f32 m_currentFade;         // _08
    f32 m_fadeStart;           // _0C
    f32 m_fadeEnd;             // _10
    Font* m_consFont;          // _14
    s32 m_frameClamp;          // _18
    TimerState m_timerState;   // _1C
    u32 m_togglePrint;         // _20
    u32 m_toggleDInfo;         // _24
    u32 m_toggleDExtra;        // _28
    u32 m_toggleBlur;          // _2C
    u32 m_toggleFileInfo;      // _30
    u32 m_toggleColls;         // _34
    Timers* m_timer;           // _38
    TextureCacher* m_cacher;   // _3C
    u32 m_dword40;             // _40
    Matrix4f* m_matrix;        // _44
    s8* m_bloDirectory;        // _48
    s8* m_texDirectory;        // _4C
    s8* m_currentDirectory;    // _50
    s8* m_dataRoot;            // _54
    AyuHeap m_heaps[8];        // _58 (sys, ovl, app, load, teki, movie, message, lang)
    s32 m_activeHeapNum;       // _5C
    u32 m_dword19C;            // _19C
    u32 m_dword1A0;            // _1A0
    u32 m_dword1A4;            // _1A4
    u32 m_materialCount;       // _1A8
    u32 m_dispCount;           // _1AC
    u32 m_lightCount;          // _1B0
    u32 m_dword1B4;            // _1B4
    u32 m_loadedPolys;         // _1B8
    u32 m_lightingSkips;       // _1BC
    u32 m_lightingSets;        // _1C0
    u32 m_systemState;         // _1C4
    u32 m_systemFlags;         // _1C8
    Graphics* m_graphics;      // _1CC
    GfxobjInfo m_gfxObjects;   // _1D0
    bool m_hasGfxObjects;      // _1F0
    char* m_textureBase1;      // _1F4
    char* m_textureBase2;      // _1F8
    BaseShape* m_currentShape; // _1FC
    CoreNode m_coreNode200;    // _200
    CoreNode m_coreNode214;    // _214
    u32 m_dword228;            // _228
    u32 m_flareCount;          // _22C
    u32 m_lfInfoCount;         // _230
    LFInfo* m_lfInfo;          // _234
    LightFlare* m_lightFlares; // _238
    LFlareGroup* m_lfGroups;   // _23C
    u32 m_dword240;            // _240
};

EXPECT_SIZE(StdSystem, 0x244);

#endif
