#ifndef _TIMERS_H
#define _TIMERS_H

#pragma once
#include <types.hpp>
#include "TimerInf.h"


class DllImport Timers {
public:
    Timers(void);
    ~Timers(void);
    class Timers& operator=(class Timers const&);
    void _start(char*, bool);
    void _stop(char*);
    void draw(class Graphics&, class Font*);
    void newFrame(void);
    void reset(void);
    void showTimes(void);
    void start(char*, bool);
    void stop(char*);

    TimerInf* m_timers; // _00
    s32 m_frames;       // _04
    s32 m_timerCount;   // _08
};

#endif
