#ifndef _RECTAREA_H
#define _RECTAREA_H

#pragma once
#include <types.hpp>

class DllImport RectArea {
public:
    RectArea(int, int, int, int);
    RectArea(void);
    class RectArea& operator=(class RectArea const&);
    int height(void);
    bool pointInside(int, int);
    void set(int, int, int, int);
    int width(void);

    u32 m_x1; // _00
    u32 m_y1; // _04
    u32 m_x2; // _08
    u32 m_y2; // _0C
};

#endif
