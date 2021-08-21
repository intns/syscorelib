#ifndef _NODE_H
#define _NODE_H

#pragma once
#include "CoreNode.h"

#include <types.hpp>

class DllImport Node : public CoreNode {
public:
    Node(class Node const&);
    Node(char*);
    class Node& operator=(class Node const&);
    void clearFlag(int);
    bool getFlag(int);
    int getFlags(void);
    int getType(void);
    void init(char*);
    void setFlag(int);
    void setFlag(int, bool);
    void setFlags(int);
    void setType(int);
    void togFlag(int);

    virtual void update(void); // _14
    virtual void draw(class Graphics&);
    virtual void render(class Graphics&);
    virtual void concat(class Matrix4f&);
    virtual void concat(class SRT&);
    virtual void concat(class VQS&);
    virtual void concat(void);
    virtual class Matrix4f* getModelMatrix(void);

    s32 m_type;    // _14
    s32 m_flags;   // _18
    s32 m_dword1C; // _1C
};

#endif
