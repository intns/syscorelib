#ifndef _QUAT_H
#define _QUAT_H

#pragma once
#include "Vector3f.h"

#include <types.hpp>

class DllImport Quat : public Vector3f {
public:
    Quat(class Quat const&);
    Quat(float, float, float, float);
    Quat(void);
    class Quat& operator=(class Quat const&);
    void fromEuler(class Vector3f&);
    void fromMat3f(class Matrix3f&);
    void genVectorX(class Vector3f&);
    void genVectorY(class Vector3f&);
    void genVectorZ(class Vector3f&);
    void multiply(class Quat&);
    void multiplyTo(class Quat&, class Quat&);
    void normalise(void);
    void rotate(class Vector3f&, float);
    void set(float, float, float, float);
    void slerp(class Quat&, float, int);

    f32 m_w; // _0C
};

#endif
