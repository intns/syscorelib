#ifndef _CORENODE_H
#define _CORENODE_H

#pragma once
#include "ANode.h"

#include <types.hpp>

class DllImport CoreNode : public ANode {
public:
    CoreNode(class CoreNode const&);
    CoreNode(char*);
    class CoreNode& operator=(class CoreNode const&);
    class CoreNode* Child(void);
    void Child(class CoreNode*);
    char* Name(void);
    class CoreNode* Next(void);
    void Next(class CoreNode*);
    class CoreNode* Parent(void);
    void add(class CoreNode*);
    void del(void);
    void genRead(class AgeServer&);
    void genWrite(class AgeServer&);
    int getChildCount(void);
    char* getName(void);
    void initCore(char*);
    void load(char*, char*, unsigned __int32);
    void setName(char*);

    virtual void genAge(class AgeServer&); // _00
    virtual void genAgeNode(class AgeServer&); // _04
    virtual int getAgeNodeType(void); // _08
    virtual void write(class RandomAccessStream&); // _0C
    virtual void read(class RandomAccessStream&); // _10

    s8* m_name;         // _04
    CoreNode* m_parent; // _08
    CoreNode* m_next;   // _0C
    CoreNode* m_child;  // _10
};

#endif
