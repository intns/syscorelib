#ifndef _MATERIALHANDLER_H
#define _MATERIALHANDLER_H

#pragma once
#include <types.hpp>

class DllImport MaterialHandler {
public:
    MaterialHandler(class MaterialHandler const&);
    MaterialHandler(void);
    class MaterialHandler& operator=(class MaterialHandler const&);
    virtual void setMaterial(class Material*);
    virtual void setTexMatrix(bool);

    u32 m_dword4; // _04
};

#endif
