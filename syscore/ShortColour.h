#ifndef _SHORTCOLOUR_H
#define _SHORTCOLOUR_H

#pragma once
#include <types.hpp>

class DllImport ShortColour {
public:
    class ShortColour& operator=(class ShortColour const&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    u16 m_r; // _00
    u16 m_g; // _02
    u16 m_b; // _04
    u16 m_a; // _06
};

#endif
