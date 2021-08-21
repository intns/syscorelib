#ifndef _PVWTEVINFO_H
#define _PVWTEVINFO_H

#pragma once
#include "PVWTevColReg.h"

#include "PVWTevStage.h"

#include <types.hpp>

class DllImport PVWTevInfo {
public:
    PVWTevInfo(void);
    class PVWTevInfo& operator=(class PVWTevInfo const&);
    bool isSame(class PVWTevInfo&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    char _00[0x84]; // _00
};

EXPECT_SIZE(PVWTevInfo, 0x84);

#endif
