#ifndef _MATRIX4F_H
#define _MATRIX4F_H

#pragma once
#include <types.hpp>

class DllImport Matrix4f {
public:
    Matrix4f(float (*const)[4]);
    Matrix4f(void);
    class Matrix4f& operator=(class Matrix4f const&);
    void blend(class Matrix4f&, float);
    void getColumn(int, class Vector3f&);
    void getRow(int, class Vector3f&);
    void inverse(class Matrix4f*);
    void makeAligned(class Vector3f&, float);
    void makeBallRotate(class Vector3f&);
    void makeBillVector(class Vector3f&, class Matrix4f&, class Vector3f&);
    void makeConcatSRT(class Matrix4f*, class Matrix4f&, class SRT&);
    void makeIdentity(void);
    void makeLookat(class Vector3f&, class Vector3f&, class Vector3f&, class Vector3f&);
    void makeLookat(class Vector3f&, class Vector3f&, class Vector3f*);
    void makeLookfrom(class Vector3f&, class Vector3f&);
    void makeOrtho(float, float, float, float, float, float, float);
    void makePerspective(float, float, float, float);
    void makeProjection(class Vector3f&, class Plane&);
    void makeReflection(class Plane&);
    void makeRotate(class Vector3f&, float);
    void makeRotate(class Vector3f&, float, float);
    void makeSRT(class Vector3f&, class Vector3f&, class Vector3f&);
    void makeSRT(class SRT);
    void makeVQS(class Vector3f&, class Quat&, class Vector3f&);
    void multiply(class Matrix4f&);
    void multiplyTo(class Matrix4f&, class Matrix4f&);
    void rotate(class Vector3f&);
    void rotate(class Vector3f&, float);
    void rotate(float, float, float);
    void rotateX(float);
    void rotateY(float);
    void rotateZ(float);
    void scale(class Vector3f&);
    void setTranslation(class Vector3f&);
    void setTranslation(float, float, float);
    void translate(float, float, float);
    void transposeTo(class Matrix4f&);

    float m_matrix[4][4];
};

#endif
