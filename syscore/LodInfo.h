#ifndef _LODINFO_H
#define _LODINFO_H

#pragma once
#include <types.hpp>

class DllImport LodInfo {
public:
    LodInfo(void);
    class LodInfo& operator=(class LodInfo const&);

    char _00[0x14];
};

#endif
