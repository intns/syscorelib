#ifndef _LIGHTCAMERA_H
#define _LIGHTCAMERA_H

#pragma once
#include <types.hpp>

class DllImport LightCamera {
public:
    LightCamera(class LightCamera const&);
    LightCamera(void);
    class LightCamera& operator=(class LightCamera const&);
    void calcProjection(class Graphics&, bool, class Node*);
    void genAge(class AgeServer&);
    void initLightmap(int, int);

    char _00[0x368];
};

#endif
