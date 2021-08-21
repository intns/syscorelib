#ifndef _MATOBJINFO_H
#define _MATOBJINFO_H

#pragma once
#include "GfxobjInfo.h"

#include <types.hpp>

class DllImport MatobjInfo : public GfxobjInfo {
public:
    MatobjInfo(class MatobjInfo const&);
    MatobjInfo(void);
    class MatobjInfo& operator=(class MatobjInfo const&);
    virtual void attach(void);
    virtual void detach(void);

    class Material* m_target; // _20
};

#endif
