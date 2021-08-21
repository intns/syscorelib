#ifndef _PLANE_H
#define _PLANE_H

#pragma once
#include "Vector3f.h"

#include <types.hpp>

class DllImport Plane {
public:
    Plane(class Plane const&);
    Plane(void);
    class Plane& operator=(class Plane const&);
    void bounceVector(class Vector3f&, float);
    float calcRadScale(void);
    void copy(class Plane&);
    void copyInv(class Plane&);
    float dist(class Vector3f&);
    bool equal(class Plane&);
    void frictionVector(class Vector3f&, float);
    void read(class RandomAccessStream&);
    void reflect(class Vector3f&);
    void reflectVector(class Vector3f&);
    int whichSide(class Vector3f&);
    void write(class RandomAccessStream&);

    Vector3f m_position; // _00
    f32 m_diameter;      // _0C
};

#endif
