#ifndef _ANIMDATA_H
#define _ANIMDATA_H

#pragma once
#include "AnimCacheInfo.h"

#include "CoreNode.h"

#include "DataChunk.h"

#include <types.hpp>

class DllImport AnimData : public CoreNode {
public:
    AnimData(class AnimData const&);
    AnimData(char*);
    AnimData(void);
    class AnimData& operator=(class AnimData const&);
    void checkMask(void);
    void delAnim(class AgeServer&);
    void initData(void);
    void playAnim(class AgeServer&);

    virtual void genAge(class AgeServer&);
    virtual void extractSRT(class SRT&, int, class AnimDataInfo*, float);
    virtual void makeAnimSRT(int, class Matrix4f*, class Matrix4f*, class AnimDataInfo*, float);
    virtual void detach(void);
    virtual void writeType(class RandomAccessStream&);

    DataChunk* m_scaling;         // _14
    DataChunk* m_rotation;        // _18
    DataChunk* m_translation;     // _1C
    s16* m_word20;                // _20
    s32 m_dword24;                // _24
    s32 m_jointCount;             // _28
    s32 m_dword2C;                // _2C
    s32 m_frameCount;             // _30
    s32 m_dword34;                // _34
    s32 m_dword38;                // _38
    s32 m_dword3C;                // _3C
    AnimCacheInfo* m_animCache40; // _40
};

EXPECT_SIZE(AnimData, 0x44);

#endif
