#ifndef _JOINT_H
#define _JOINT_H

#pragma once
#include "BaseShape.h"

#include "BoundBox.h"

#include "CoreNode.h"

#include "Material.h"

#include "Matrix4f.h"

#include "Mesh.h"

#include "Vector3f.h"

#include <types.hpp>

enum class JointKind : int {
    JK_NULL, // _00
    JK_MESH, // _01
    JK_JOINT // _02
};

class DllImport Joint : public CoreNode {
public:
    class DllImport MatPoly : public CoreNode {
    public:
        MatPoly(class MatPoly const&);
        MatPoly(class Material*, class Mesh*);
        MatPoly(void);
        class MatPoly& operator=(class MatPoly const&);

        Material* m_material; // _14
        Mesh* m_mesh;         // _18
        s32 m_index;          // _1C
        s32 m_meshIndex;      // _20
        s32 m_dword24;        // _24
    };

    Joint(class Joint const&);
    Joint(void);
    class Joint& operator=(class Joint const&);
    virtual void genAge(class AgeServer&);
    void overrideAnim(class AnimContext*);
    virtual void read(class RandomAccessStream&);
    void recOverrideAnim(class AnimContext*);
    void recShowHierarchy(void);
    void render(class Graphics&);
    void sectionJoint(class AgeServer&);
    virtual void write(class RandomAccessStream&);

    s32 m_index;              // _14
    s32 m_parent;             // _18
    JointKind m_type;         // _1C
    s32 m_flags;              // _20
    Vector3f m_scale;         // _24
    Vector3f m_rotation;      // _30
    Vector3f m_translation;   // _3C
    Matrix4f m_animMatrix;    // _48
    Matrix4f m_matrix88;      // _88
    u8 m_isBillboard;         // _89
    u8 m_useVolume;           // _8A
    u8 m_useLightGroup;       // _8B
    BoundBox m_bounds;        // _8C
    MatPoly m_matpolyE4;      // _E4
    s32 m_dword10C;           // _10C
    s32 m_matPolyCount;       // _110
    s32 m_dword114;           // _114
    class BaseShape* m_shape; // _118
};

#endif
