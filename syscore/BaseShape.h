#ifndef _BASESHAPE_H
#define _BASESHAPE_H

#pragma once
#include "AnimData.h"

#include "AnimFrameCacher.h"

#include "BaseRoomInfo.h"

#include "CoreNode.h"

#include "Envelope.h"

#include "LightGroup.h"

#include "Material.h"

#include "Mesh.h"

#include "ObjCollInfo.h"

#include "PVWTevInfo.h"

#include "RouteGroup.h"

#include "TexAttr.h"

#include "Vector2f.h"

#include "VtxMatrix.h"

#include <types.hpp>

template <typename A, typename B>
class IDelegate2;

struct NBT {
    Vector3f m_normal;   // _00
    Vector3f m_binormal; // _0C
    Vector3f m_tangent;  // _18
};

class DllImport BaseShape : public CoreNode {
public:
    BaseShape(class BaseShape const&);
    BaseShape(void);
    class BaseShape& operator=(class BaseShape const&);
    void backupAnimOverrides(class AnimContext**);
    void calcBasePose(class Matrix4f&);
    void calcJointWorldDir(class Graphics&, int, class Vector3f&);
    float calcJointWorldPos(class Graphics&, int, class Vector3f&);
    void calcJointWorldScale(class Graphics&, int, class Vector3f&);
    void calcWeightedMatrices(void);
    void countMaterials(class Joint*, unsigned __int32);
    void createCollisions(int);
    void drawculled(class Graphics&, class Camera&, class ShapeDynMaterials*);
    void drawlights(class Graphics&, class Camera&);
    void drawobjcolls(class Graphics&, class Camera&);
    void drawroutes(class Graphics&, class Camera&);
    void drawshape(class Graphics&, class Camera&, class ShapeDynMaterials*);
    void exportIni(class RandomAccessStream&, bool);
    class CollTriInfo* findCollTri(class Vector3f&, class Vector3f&, class Vector3f&, char*);
    class Matrix4f& getAnimMatrix(int);
    class CollGroup* getCollTris(class Vector3f&);
    void importDca(char*, class CmdStream*);
    class AnimData* importDck(char*, class CmdStream*);
    void importIni(class RandomAccessStream&);
    void initIni(bool);
    void initialise(void);
    class ShapeDynMaterials* instanceMaterials(int);
    class AnimData* loadAnimation(char*, bool);
    class AnimData* loadDca(char*, class RandomAccessStream&);
    class AnimData* loadDck(char*, class RandomAccessStream&);
    void makeInstance(class ShapeDynMaterials&, int);
    void makeNormalIndexes(unsigned __int16*);
    void overrideAnim(int, class AnimContext*);
    void recAddMatpoly(class Joint*, int);
    void recTraverseMaterials(class Joint*, class IDelegate2<class Joint*, unsigned __int32>*);
    void removeMtxDependancy(void);

    void resolveTextureNames(void);
    void restoreAnimOverrides(void);
    void skipChunk(class RandomAccessStream&, unsigned __int32);
    void updateAnim(class Graphics&, class Matrix4f&, float*);

    virtual void read(class RandomAccessStream&);
    virtual void optimize(void);
    virtual void update(void);
    virtual void render(class Graphics&);
    virtual void render2d(class Graphics&);
    virtual void msgCommand(class DataMsg&);
    virtual void checkMouseEvent(int, int, int, int, int, int);
    virtual class RouteGroup* makeRouteGroup(void);

    s32 m_systemUsed;                   // _14
    AnimContext* m_currentAnims;        // _18
    AnimContext* m_animOverrides;       // _1C
    AnimContext* m_animContext;         // _20
    AnimFrameCacher* m_animFrameCacher; // _24
    Matrix4f* m_animMatrix;             // _28
    s32 m_dword2C;                      // _2C
    s32 m_envelopeCount;                // _30
    Envelope* m_envelopes;              // _34
    s32 m_vtxMatrixCount;               // _38
    VtxMatrix* m_vtxMatrix;             // _3C
    s32 m_materialCount;                // _40
    Material* m_materials;              // _44
    s32 m_tevInfoCount;                 // _48
    PVWTevInfo* m_tevInfo;              // _4C
    s32 m_meshCount;                    // _50
    Mesh* m_meshes;                     // _54
    s32 m_jointCount;                   // _58
    Joint* m_joints;                    // _5C
    s32 m_routeGroupCount;              // _60
    RouteGroup* m_routeGroup;           // _64
    s32 m_textureAttributesCount;       // _68
    TexAttr* m_textureAtttributes;      // _6C
    s32 m_dword70;                      // _70
    s32 m_textureCount;                 // _74
    TexImg* m_textures;                 // _78
    AnimData m_animData;                // _7C
    LightGroup m_groups;                // _C0
    ObjCollInfo m_collisionInfo;        // _12C
    s32 m_dword180;                     // _180
    BoundBox m_courseExtents;           // _184
    f32 m_gridSize;                     // _19C
    s32 m_gridSizeX;                    // _1A0
    s32 m_gridSizeY;                    // _1A4
    s32* m_collisionTriangles;          // _1A8
    s32 m_collTriCount;                 // _1AC
    CollTriInfo* m_collTriInfo;         // _1B0
    s32 m_baseRoomCount;                // _1B4
    BaseRoomInfo* m_roomInfo;           // _1B8
    u8 m_gap1BC[0xC0];                  // _1BC
    s32 m_vertexCount;                  // _27C
    Vector3f* m_vertices;               // _280
    s32 m_vertColourCount;              // _284
    Colour* m_vertColours;              // _288
    s32 m_texCoordSetCount;             // _28C
    s32 m_texCoordCount[8];             // _290
    Vector2f* m_texCoords[8];           // _2B0
    s32 m_normalCount;                  // _2D0
    Vector3f* m_normals;                // _2D4
    s32 m_nbtCount;                     // _2D8
    NBT* m_nbt;                         // _2DC
    s32 m_attrListCount;                // _2E0
    Texture** m_externalTextures;       // _2E4
    s32 m_attrListMatCount;             // _2E8
    u32 m_dword2EC;                     // _2EC
    u8 m_byte2F0;                       // _2FO
};

#endif
