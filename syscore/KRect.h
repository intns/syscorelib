#ifndef _KRECT_H
#define _KRECT_H

#pragma once
#include <types.hpp>

class DllImport KRect {
public:
    KRect(class KRect const&);
    KRect(void);
    class KRect& operator=(class KRect const&);
    bool inside(class Vector3f&);

    char _00[0x24];
};

#endif
