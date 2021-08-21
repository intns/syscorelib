#ifndef _BOUNDBOX_H
#define _BOUNDBOX_H

#pragma once
#include "Vector3f.h"

#include <types.hpp>

class DllImport BoundBox {
public:
    BoundBox(class Vector3f&, class Vector3f&);
    BoundBox(class BoundBox const&);
    BoundBox(void);
    class BoundBox& operator=(class BoundBox const&);
    void draw(class Graphics&);
    void expandBound(class BoundBox&);
    void expandBound(class Vector3f&);
    bool intersects(class BoundBox&);
    void read(class RandomAccessStream&);
    void resetBound(void);
    void write(class RandomAccessStream&);

    Vector3f m_maxBounds; // _00
    Vector3f m_minBounds; // _0C
};

EXPECT_SIZE(BoundBox, 0x18);

#endif
