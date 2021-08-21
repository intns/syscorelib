#ifndef _VTXMATRIX_H
#define _VTXMATRIX_H

#pragma once
#include <types.hpp>

#pragma pack(4) // Make sure sizeof(VtxMatrix) == 8
class DllImport VtxMatrix {
public:
    class VtxMatrix& operator=(class VtxMatrix const&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    bool m_partiallyWeighted; // _00
    u32 m_index;              // _04
};

#endif
