#ifndef _CULLFRUSTUM_H
#define _CULLFRUSTUM_H

#pragma once
#include <types.hpp>

class DllImport CullFrustum {
public:
    CullFrustum(class CullFrustum const&);
    CullFrustum(void);
    class CullFrustum& operator=(class CullFrustum const&);
    void additionalPlanes(class CullFrustum*);
    void calcLookAt(class Vector3f&, class Vector3f&, class Vector3f*);
    void calcLookFrom(class Vector3f&, class Vector3f&);
    void calcVectors(class Vector3f&, class Vector3f&);
    void createInvVecs(void);
    void createVecs(void);
    void createViewPlanes(void);
    void draw(class Graphics&);
    int isBoundVisible(class BoundBox&, int);
    bool isPointVisible(class Vector3f&, float);
    void projectVector(class Vector3f&, class Vector3f&);
    void setBoundOffset(class Vector3f*);
    void update(float, float, float, float);
    void updateViewPlanes(float, float, float, float);
    void vectorToWorldPlane(class Vector3f&, class CullingPlane&);

    char _00[0x260]; // _00
};

#endif
