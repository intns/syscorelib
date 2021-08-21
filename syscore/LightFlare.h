#ifndef _LIGHTFLARE_H
#define _LIGHTFLARE_H

#pragma once
#include "CoreNode.h"

#include "Vector3f.h"

#include <types.hpp>

class DllImport LightFlare : public CoreNode {
public:
    LightFlare(class LightFlare const&);
    LightFlare(void);
    class LightFlare& operator=(class LightFlare const&);
    void ageDel(class AgeServer&);
    virtual void genAge(class AgeServer&);
    void loadini(class CmdStream*);
    void saveini(char*, class RandomAccessStream&);

    f32 m_size;          // _14
    Vector3f m_position; // _18
};

#endif
