#ifndef _ANIMPALETTE_H
#define _ANIMPALETTE_H

#pragma once
#include <types.hpp>

class DllImport AnimPalette {
public:
    AnimPalette(int, int);
    class AnimPalette& operator=(class AnimPalette const&);

    char _00[0x24];
};

EXPECT_SIZE(AnimPalette, 0x24);

#endif
