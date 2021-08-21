#ifndef _ANODE_H
#define _ANODE_H

#pragma once
#include <types.hpp>

enum AGENODE_TYPE {
    ANT_ANode = 0, //_00
    ANT_UNK1,      // _01
    ANT_CoreNode,  // _02
};

class DllImport ANode {
public:
    ANode(class ANode const&);
    ANode(void);
    class ANode& operator=(class ANode const&);
    virtual void genAge(class AgeServer&);
    virtual void genAgeNode(class AgeServer&);
    virtual int getAgeNodeType(void);
};

EXPECT_SIZE(ANode, 0x4);

#endif
