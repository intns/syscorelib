#ifndef _SPLITBAR_H
#define _SPLITBAR_H

#pragma once
#include "UIWindow.h"

#include <types.hpp>

class DllImport SplitBar : public UIWindow {
public:
    SplitBar(class SplitBar const&);
    SplitBar(class UIWindow*, class UIWindow*, unsigned long, int);
    ~SplitBar(void);
    class SplitBar& operator=(class SplitBar const&);
    void handleClick(int, int);
    void handleRelease(int, int);
    virtual int processMessage(struct HWND__*, unsigned int, unsigned int, long);

    u8 m_releaseBar;      // _88
    u32 m_releaseX;       // _8C
    u32 m_releaseY;       // _90
    UIWindow* m_window94; // _94
    UIWindow* m_window98; // _98
    u32 m_dword9C;        // _9C
    HBRUSH m_brush;       // _A0
};

#endif
