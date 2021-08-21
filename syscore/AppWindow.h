#ifndef _APPWINDOW_H
#define _APPWINDOW_H

#pragma once
#include "UIWindow.h"

#include <types.hpp>

class DllImport AppWindow : public UIWindow {
public:
    AppWindow(class AppWindow const&);
    AppWindow(class UIWindow*, int, int, int, bool);
    ~AppWindow(void);
    class AppWindow& operator=(class AppWindow const&);
    virtual int processMessage(struct HWND__*, unsigned int, unsigned int, long);

    class BaseApp* m_app; // _88
};

EXPECT_SIZE(AppWindow, 0x8C);

#endif
