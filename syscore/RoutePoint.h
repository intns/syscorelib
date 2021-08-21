#ifndef _ROUTEPOINT_H
#define _ROUTEPOINT_H

#pragma once
#include <types.hpp>
#include "Vector3f.h"

#include "CoreNode.h"

#include "RouteLink.h"


class DllImport RoutePoint : public CoreNode {
public:
    RoutePoint(class RoutePoint const&);
    RoutePoint(void);
    class RoutePoint& operator=(class RoutePoint const&);
    virtual void genAge(class AgeServer&);
    void loadini(class CmdStream*);
    void refresh(class Graphics&);

    s32 m_dword14;       // _14
    s32 m_dword18;       // _18
    s32 m_dword1C;       // _1C
    f32 m_dword20;       // _20
    f32 m_width;         // _24
    Vector3f m_position; // _28
    s32 m_state;         // _34
    s32 m_index;         // _38
    RouteLink m_links;   // _3C
};

#endif
