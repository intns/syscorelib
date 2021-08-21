#ifndef _ANIMDCK_H
#define _ANIMDCK_H

#pragma once
#include "AnimData.h"

#include <types.hpp>

class DllImport AnimDck : public AnimData {
public:
    AnimDck(class AnimDck const&);
    AnimDck(char*);
    AnimDck(class BaseShape*, int);
    AnimDck(void);
    class AnimDck& operator=(class AnimDck const&);
    virtual void extractSRT(class SRT&, int, class AnimDataInfo*, float);
    void getAnimInfo(class CmdStream*);
    virtual void makeAnimSRT(int, class Matrix4f*, class Matrix4f*, class AnimDataInfo*, float);
    void parse(class CmdStream*);
    virtual void read(class RandomAccessStream&);
    virtual void write(class RandomAccessStream&);
    virtual void writeType(class RandomAccessStream&);
};

EXPECT_SIZE(AnimDck, sizeof(AnimData));

#endif
