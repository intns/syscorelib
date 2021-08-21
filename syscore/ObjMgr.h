#ifndef _OBJMGR_H
#define _OBJMGR_H

#pragma once
#include "SRTNode.h"

#include <types.hpp>

class DllImport ObjMgr : public SRTNode {
public:
    ObjMgr(class ObjMgr const&);
    ObjMgr(void);
    class ObjMgr& operator=(class ObjMgr const&);
};

#endif
