#ifndef _SRT_H
#define _SRT_H

#pragma once
#include <types.hpp>
#include "Vector3f.h"


class DllImport SRT {
public:
    SRT(class SRT const&);
    SRT(void);
    class SRT& operator=(class SRT const&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    Vector3f m_scale;    // _00
    Vector3f m_rotation; // _0C
    Vector3f m_position; // _18
};

#endif
