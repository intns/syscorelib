#ifndef _KTRI_H
#define _KTRI_H

#pragma once
#include <types.hpp>

class DllImport KTri {
public:
    KTri(class KTri const&);
    KTri(void);
    class KTri& operator=(class KTri const&);
    class Vector3f& Edge0(void);
    class Vector3f& Edge1(void);
    class Vector3f& Origin(void);
    void set(class Vector3f&, class Vector3f&, class Vector3f&);

    char _00[0x24];
};

#endif
