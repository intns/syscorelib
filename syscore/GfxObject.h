#ifndef _GFXOBJECT_H
#define _GFXOBJECT_H

#pragma once
#include <types.hpp>

class DllImport GfxObject {
public:
    GfxObject(class GfxObject const&);
    GfxObject(void);
    class GfxObject& operator=(class GfxObject const&);
    virtual void attach(void);
    virtual void detach(void);
};

#endif
