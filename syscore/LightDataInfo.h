#ifndef _LIGHTDATAINFO_H
#define _LIGHTDATAINFO_H

#pragma once
#include <types.hpp>

class DllImport LightDataInfo {
public:
    LightDataInfo(class LightDataInfo const&);
    LightDataInfo(void);
    class LightDataInfo& operator=(class LightDataInfo const&);
    void update(float);

    u8 m_gap0[72];
    u32 m_dword48;
    u32 m_dword4C;
    u32 m_dword50;
    u32 m_dword54;
    u8 m_char58;
    u8 m_gap59[723];
    u32 m_dword32C;
    u32 m_dword330;
};

#endif
