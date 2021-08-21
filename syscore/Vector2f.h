#ifndef _VECTOR2F_H
#define _VECTOR2F_H

#pragma once
#include <types.hpp>

class DllImport Vector2f {
public:
    Vector2f(float const&, float const&);
    Vector2f(void);
    class Vector2f& operator=(class Vector2f const&);
    void read(class Stream&);
    void set(float, float);
    void write(class Stream&);

    f32 m_x; // _00
    f32 m_y; // _04
};

#endif
