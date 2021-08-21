#ifndef _TIMERINF_H
#define _TIMERINF_H

#pragma once
#include <types.hpp>

class DllImport TimerInf {
public:
    TimerInf(char*);
    class TimerInf& operator=(class TimerInf const&);

    s8* m_name;       // _00
    f32 m_startTime;  // _04
    f32 m_stopTime;   // _08
    u32 m_dwordC;     // _0C
    u32 m_dword10;    // _10
    u32 m_dword14;    // _14
    u32 m_dword18;    // _18
    u32 m_dword1C;    // _1C
    u8 m_byte20;      // _20
    TimerInf* m_next; // _24
};

#endif
