#ifndef _OBJCOLLINFO_H
#define _OBJCOLLINFO_H

#pragma once
#include "BaseShape.h"

#include "CoreNode.h"

#include "ID32.h"

#include "Vector3f.h"

#include <types.hpp>

enum class ObjCollType : u32 {
    OCT_Sphere = 1,   // _01
    OCT_Platform = 2, // _02
};

enum class ObjCollFlags : u32 {
    OCF_GetMinY = 1, // _01
};

class DllImport ObjCollInfo : public CoreNode {
public:
    ObjCollInfo(class ObjCollInfo const&);
    ObjCollInfo(void);
    class ObjCollInfo& operator=(class ObjCollInfo const&);
    void ageChangePlatname(class AgeServer&);
    void ageDelCollInfo(class AgeServer&);
    virtual void genAge(class AgeServer&);
    void getCentreSize(class Vector3f&, float&);
    void loadini(class CmdStream*);
    void newCollInfoButton(class AgeServer&);
    void saveini(char*, class RandomAccessStream&);
    void sectionJointsChange(class AgeServer&);
    void showInfo(class Graphics&, class Matrix4f&);

    ID32 m_id;                // _14
    ID32 m_code;              // _20
    ObjCollType m_collType;   // _2C
    s32 m_jointIdx;           // _30
    Vector3f m_posCentre;     // _34
    f32 m_radius;             // _40
    BaseShape* m_parentShape; // _44
    s32 m_dword48;            // _48
    s8* m_platName;           // _4C
    ObjCollFlags m_flags;     // _50
};

EXPECT_SIZE(ObjCollInfo, 0x54);

#endif
