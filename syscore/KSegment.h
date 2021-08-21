#ifndef _KSEGMENT_H
#define _KSEGMENT_H

#pragma once
#include <types.hpp>

class DllImport KSegment {
public:
    KSegment(class KSegment const&);
    KSegment(void);
    class KSegment& operator=(class KSegment const&);
    class Vector3f& Direction(void);
    class Vector3f& Origin(void);

    char _00[0x18];
};

#endif
