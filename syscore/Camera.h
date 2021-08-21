#ifndef _CAMERA_H
#define _CAMERA_H

#pragma once
#include <types.hpp>

class DllImport Camera {
public:
    Camera(class Camera const&);
    Camera(void);
    class Camera& operator=(class Camera const&);
    void camReflect(class Camera&, class Plane&);
    void lookDir(class Vector3f&);
    float projectCamPoint(class Vector3f&);
    float projectWorldPoint(class Graphics&, class Vector3f&);
    void rightDir(class Vector3f&);
    void upDir(class Vector3f&);

    char _00[0x348]; // _00
};

#endif
