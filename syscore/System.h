#ifndef _SYSTEM_H
#define _SYSTEM_H

#pragma once
#include "AtxDirectRouter.h"

#include "AtxFileStream.h"

#include "BufferedStream.h"

#include "ControllerMgr.h"

#include "StdSystem.h"

#include <types.hpp>

template <typename T, typename B>
class IDelegate2 {
};

class DllImport System : public StdSystem {
public:
    System(class System const&);
    System(void);
    ~System(void);
    class System& operator=(class System const&);
    void beginRender(void);
    void buildModeList(void);
    class UIWindow* createDebugStream(class UIWindow*);
    class RandomAccessStream* createFile(char*, bool);
    void doneRender(void);
    class BaseApp* firstApp(void);
    void genAge(class AgeServer&);
    class AtxRouter* getAtxRouter(void);
    __int32 getFrameCount(void);
    float getFrameRate(void);
    float getFrameTime(void);
    float getTime(void);
    static void halt(char*, int, char*);
    void hardReset(void);
    int run(class BaseApp*);
    void searchFiles(char*, char*, class IDelegate2<char*, unsigned __int32>*, bool);
    void setAtxRouter(class AtxRouter*);
    int setStreamType(int);
    bool setVideoMode(bool, int, int, int);
    void sleep(float);
    void updateSysClock(void);
    void waitRetrace(void);

    virtual class RandomAccessStream* openFile(char*, bool, bool);
    virtual void sndPlaySe(unsigned __int32);

    struct DisplayMode {
        s16 m_dmPelsWidth;      // _00
        s16 m_dmPelsHeight;     // _02
        s16 m_dmPelsBitsPerPel; // _04
    };

    DisplayMode* m_displayMode;         // _244
    s32 m_dispModeCount;                // _248 display modes
    u8 m_byte24C;                       // _24C
    u8 m_byte24D;                       // _24D
    u8 m_byte24E;                       // _24E
    u32 m_glWindowsActive;              // _250 guessed name
    u32 m_videoMode;                    // _254
    Graphics* m_graphics2;              // _258
    void* m_sysHeapMem;                 // _25C
    s32 m_sysHeapSize;                  // _260 0x5000000
    AtxFileStream m_fileStream264;      // _264
    BufferedStream m_bufferedStream284; // _284
    u32 m_streamType;                   // _2B0
    ControllerMgr m_controllerMgr;      // _2B4
    u8 m_hostName[0x80];                // _3B8
    AtxDirectRouter* m_router;          // _438
    u32 m_dword43C;                     // _43C
    u64 m_currentTime;                  // _440
    u64 m_endClockTime;                 // _448
    u64 m_startingClockTime;            // _450
    f32 m_frameTime;                    // _458
    f32 m_frameRate;                    // _45C
    u32 m_clockCount;                   // _460 increments on updateSysClock
    u32 m_endClockCount;                // _464
    u32 m_frameCount;                   // _468
};

EXPECT_SIZE(System, 0x46C);

extern DllImport System* gsys;
System UNUSED_SYSTEM_INSTANCE; // USED TO INITIALISE GSYS

#endif
