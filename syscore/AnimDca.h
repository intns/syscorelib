#ifndef _ANIMDCA_H
#define _ANIMDCA_H

#pragma once
#include "AnimData.h"

#include <types.hpp>

class DllImport AnimDca : public AnimData {
public:
    AnimDca(class AnimDca const&);
    AnimDca(char*);
    AnimDca(class BaseShape*, int);
    class AnimDca& operator=(class AnimDca const&);
    void getAnimInfo(class CmdStream*);
    void parse(class CmdStream*);
    virtual void read(class RandomAccessStream&);
    virtual void write(class RandomAccessStream&);
    virtual void writeType(class RandomAccessStream&);
};

EXPECT_SIZE(AnimDca, sizeof(AnimData));

#endif
