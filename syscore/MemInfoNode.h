#ifndef _MEMINFONODE_H
#define _MEMINFONODE_H

#pragma once
#include "CoreNode.h"

#include <types.hpp>

class DllImport MemInfoNode : public CoreNode {
public:
    MemInfoNode(class MemInfoNode const&);
    MemInfoNode(void);
    class MemInfoNode& operator=(class MemInfoNode const&);

    u32 m_dword14; // _14
};

#endif
