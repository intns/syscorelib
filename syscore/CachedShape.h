#ifndef _CACHEDSHAPE_H
#define _CACHEDSHAPE_H

#pragma once
#include <types.hpp>

class DllImport CachedShape {
public:
    CachedShape(void);
    class CachedShape& operator=(class CachedShape const&);
    void insertAfter(class CachedShape*);
    void remove(void);

    u32* m_dword0; // _00
    u32* m_dword4; // _04
};

#endif
