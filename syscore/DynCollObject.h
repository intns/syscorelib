#ifndef _DYNCOLLOBJECT_H
#define _DYNCOLLOBJECT_H

#pragma once
#include "Node.h"

#include <types.hpp>

class DllImport DynCollObject : public Node {
public:
    DynCollObject(class DynCollObject const&);
    DynCollObject(void);
    class DynCollObject& operator=(class DynCollObject const&);
    virtual void adjust(class Creature*);
    virtual void applyVelocity(class Plane&, class Vector3f&, class Vector3f&);
    virtual class Shape* getShape(void);
    virtual void touchCallback(class Plane&, class Vector3f&, class Vector3f&);

    u32 m_dword20; // _20
    u32 m_dword24; // _24
    u32 m_dword28; // _28
};

#endif
