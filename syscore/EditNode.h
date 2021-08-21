#ifndef _EDITNODE_H
#define _EDITNODE_H

#pragma once
#include "CoreNode.h"

#include <types.hpp>

class DllImport EditNode : public CoreNode {
public:
    EditNode(class EditNode const&);
    EditNode(char*);
    class EditNode& operator=(class EditNode const&);
    virtual void msgCommand(class DataMsg&);
    virtual void render2d(class Graphics&, int&);
};

#endif
