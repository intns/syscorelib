#ifndef _LFINFO_H
#define _LFINFO_H

#pragma once
#include "Colour.h"

#include "Vector2f.h"

#include "Vector3f.h"

#include <types.hpp>

class DllImport LFInfo : public Colour {
public:
    LFInfo(class LFInfo const&);
    LFInfo(void);
    class LFInfo& operator=(class LFInfo const&);

    Vector3f m_vector4;  // _04
    Vector2f m_vector10; // _10
    Vector2f m_vector18; // _18
    Vector2f m_vector20; // _28
    u32 m_dword28;       // _28
};

#endif
