#ifndef _DLOBJINFO_H
#define _DLOBJINFO_H

#pragma once
#include "GfxobjInfo.h"

#include <types.hpp>

class DllImport DlobjInfo : public GfxobjInfo {
public:
    DlobjInfo(class DlobjInfo const&);
    DlobjInfo(void);
    class DlobjInfo& operator=(class DlobjInfo const&);
    virtual void attach(void);
    virtual void detach(void);

    class DispList* m_target; // _20
};

#endif
