#ifndef _COLOUR_H
#define _COLOUR_H

#pragma once
#include <types.hpp>

class DllImport Colour {
public:
    Colour(void);
    Colour(unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8);
    class Colour& operator=(class Colour const&);
    void add(class Colour&);
    void genAge(class AgeServer&, char*);
    void lerp(class Colour&, float);
    void lerpTo(class Colour&, float, class Colour&);
    void read(class Stream&);
    void set(unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8);
    void write(class Stream&);

    u8 m_r; // _00
    u8 m_g; // _01
    u8 m_b; // _02
    u8 m_a; // _03
};

#endif
