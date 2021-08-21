#ifndef _COLLTRIINFO_H
#define _COLLTRIINFO_H

#pragma once
#include "BaseCollTriInfo.h"

#include <types.hpp>

class DllImport CollTriInfo : public BaseCollTriInfo {
public:
    CollTriInfo(class CollTriInfo const&);
    CollTriInfo(void);
    class CollTriInfo& operator=(class CollTriInfo const&);
    int behindEdge(class Vector3f&);
    bool inTriClampTo(class Vector3f&);
    void init(class RoomInfo*, class Vector3f*);

    Plane m_planes[3]; // _28
};

#endif
