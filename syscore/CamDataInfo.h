#ifndef _CAMDATAINFO_H
#define _CAMDATAINFO_H

#pragma once
#include <types.hpp>

class DllImport CamDataInfo {
public:
    CamDataInfo(class CamDataInfo const&);
    CamDataInfo(void);
    class CamDataInfo& operator=(class CamDataInfo const&);
    void update(float, class Matrix4f&);

    char _00[0x3F8]; // _00
};

#endif
