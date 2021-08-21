#ifndef _SRTNODE_H
#define _SRTNODE_H

#pragma once
#include "Matrix4f.h"

#include "Node.h"

#include "SRT.h"

#include <types.hpp>

class DllImport SRTNode : public Node {
public:
    SRTNode(class SRTNode const&);
    SRTNode(char*);
    class SRTNode& operator=(class SRTNode const&);
    virtual void concat(class Matrix4f&);
    virtual void concat(void);
    virtual void genAge(class AgeServer&);
    virtual class Matrix4f* getModelMatrix(void);
    class Vector3f& getPosition(void);
    class Vector3f& getRotation(void);
    class Vector3f& getScale(void);
    class Vector3f& getWorldPosition(void);
    void setPosition(class Vector3f&);
    void setRotation(class Vector3f&);
    void setScale(class Vector3f&);
    virtual void update(void);

    Matrix4f m_matrix; // _20
    SRT m_srt;         // _60
};

#endif
