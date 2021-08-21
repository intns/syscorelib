#ifndef _KNOTPOINT_H
#define _KNOTPOINT_H

#pragma once
#include "Vector3f.h"

#include <types.hpp>

class DllImport KnotPoint : public Vector3f {
public:
    KnotPoint(class KnotPoint const&);
    KnotPoint(void);
    class KnotPoint& operator=(class KnotPoint const&);

    u32 m_dwordC; // _0C
};

#endif
