#ifndef _MATRIX3F_H
#define _MATRIX3F_H

#pragma once
#include <types.hpp>

class DllImport Matrix3f {
public:
    Matrix3f(float (*)[3]);
    Matrix3f(void);
    class Matrix3f& operator=(class Matrix3f const&);
    float& operator()(int, int);
    float const& operator()(int, int) const;
    class Matrix3f& operator+=(class Matrix3f const&);
    float GetElement(int, int) const;
    class Matrix3f& SetElement(int, int, float);
    void identity(void);

    float m_matrix[3][3];
};

#endif
