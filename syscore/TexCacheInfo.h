#ifndef _TEXCACHEINFO_H
#define _TEXCACHEINFO_H

#pragma once
#include <types.hpp>

class DllImport TexCacheInfo {
public:
    TexCacheInfo(void);
    class TexCacheInfo& operator=(class TexCacheInfo const&);
    void initData(void);
};

#endif
