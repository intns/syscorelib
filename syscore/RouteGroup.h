#ifndef _ROUTEGROUP_H
#define _ROUTEGROUP_H

#pragma once
#include <types.hpp>
#include "RoutePoint.h"

#include "Colour.h"


class DllImport RouteGroup : public CoreNode {
public:
    RouteGroup(class RouteGroup const&);
    RouteGroup(void);
    class RouteGroup& operator=(class RouteGroup const&);
    void loadini(class CmdStream*);
    void refresh(class Graphics&, class EditNode*);
    virtual void render2d(class Graphics&, int&);
    void saveini(char*, class RandomAccessStream&);
    void setID(unsigned __int32);
    void updateID(void);

    Colour m_colour;    // _14
    s8 m_name[0x40];    // _18
    u32 m_id;           // _58
    s8 m_idStr[4];      // _5C
    u32 m_dword60;      // _60
    u32 m_dword64;      // _64
    RoutePoint m_point; // _68
    u32 m_dwordBC;      // _BC
};

#endif
