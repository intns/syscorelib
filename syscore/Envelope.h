#ifndef _ENVELOPE_H
#define _ENVELOPE_H

#pragma once
#include <types.hpp>

class DllImport Envelope {
public:
    Envelope(void);
    class Envelope& operator=(class Envelope const&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    s32 m_indicesCount; // _00
    s32* m_indices;     // _04
    f32* m_weights;     // _08
};

#endif
