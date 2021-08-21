#ifndef _NODEMGR_H
#define _NODEMGR_H

#pragma once
#include "CoreNode.h"

#include <types.hpp>

class DllImport NodeMgr {
public:
    NodeMgr(class NodeMgr const&);
    NodeMgr(void);
    ~NodeMgr(void);
    class NodeMgr& operator=(class NodeMgr const&);
    void Del(class Node*);
    class CoreNode* findNode(char*, class CoreNode*);
    class CoreNode* firstNode(void);
    void recFindNode(class CoreNode*, char*);

    int m_dword4;   // _04
    CoreNode m_top; // _08
};

#endif
