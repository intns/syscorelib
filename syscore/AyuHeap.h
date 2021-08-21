#ifndef _AYUHEAP_H
#define _AYUHEAP_H

#pragma once
#include "AyuStack.h"

#include <types.hpp>

class DllImport AyuHeap : public AyuStack {
public:
    AyuHeap(void);
    class AyuHeap& operator=(class AyuHeap const&);
    void init(char*, int, void*, int);

    s32 m_dword24; // _24
};

#endif
