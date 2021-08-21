#ifndef _VECTOR2I_H
#define _VECTOR2I_H

#pragma once
#include <types.hpp>

class DllImport Vector2i {
public:
    class Vector2i& operator=(class Vector2i const&);
    void read(class Stream&);
    void set(int, int);
    void write(class Stream&);

    u32 m_x; // _00
    u32 m_y; // _04
};

#endif
