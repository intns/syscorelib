#ifndef _VECTOR3F_H
#define _VECTOR3F_H

#pragma once
#include <types.hpp>

class DllImport Vector3f {
public:
    Vector3f(float const&, float const&, float const&);
    Vector3f(class Vector3f const&);
    Vector3f(void);
    class Vector3f& operator=(class Vector3f const&);
    void CP(class Vector3f&);
    float DP(class Vector3f&);
    void add2(class Vector3f&, class Vector3f&);
    void add(class Vector3f&, class Vector3f&);
    void add(class Vector3f&);
    void add(float, float, float);
    void bounce(class Vector3f&, float);
    void cross(class Vector3f&, class Vector3f&);
    float distance(class Vector3f&);
    void div(float);
    float dot(class Vector3f&);
    void genAge(class AgeServer&, char*, class Vector3f&, class Vector3f&);
    void input(class Vector3f&);
    bool isSame(class Vector3f&);
    float length(void);
    void lerpTo(class Vector3f&, float, class Vector3f&);
    void middle(class Vector3f&, class Vector3f&);
    void multMatrix(class Matrix4f&);
    void multMatrixTo(class Matrix4f&, class Vector3f&);
    void multiply(float);
    void negate(void);
    float normalise(void);
    void normalize(void);
    void output(class Vector3f&);
    void project(class Vector3f&);
    void read(class Stream&);
    void rotate(class Matrix4f&);
    void rotate(class Quat&);
    void rotateInverse(class Quat&);
    void rotateTo(class Matrix4f&, class Vector3f&);
    void rotateTranspose(class Matrix4f&);
    void scale2(float, class Vector3f&);
    void scale(float);
    void set(float const&, float const&, float const&);
    void set(class Vector3f const&);
    float squaredLength(void);
    void sub2(class Vector3f&, class Vector3f&);
    void sub(class Vector3f&, class Vector3f&);
    void sub(class Vector3f&);
    void write(class Stream&);

    f32 m_x; // _00
    f32 m_y; // _04
    f32 m_z; // _08
};

#endif
