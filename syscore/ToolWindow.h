#ifndef _TOOLWINDOW_H
#define _TOOLWINDOW_H

#pragma once
#include "UIWindow.h"

#include <types.hpp>

class DllImport ToolWindow {
public:
    ToolWindow(class ToolWindow const&);
    ToolWindow(class UIWindow*, int, int, int, bool);
    ~ToolWindow(void);
    class ToolWindow& operator=(class ToolWindow const&);
    virtual void createWindow(char*, char*, struct HMENU__*);
    void initTools(struct HINSTANCE__*, int, struct _TBBUTTON*, struct tagTBADDBITMAP*);
    virtual int processMessage(struct HWND__*, unsigned int, unsigned int, long);

    UIWindow* m_window;     // _88
    HINSTANCE m_windowInst; // _8C
};

#endif
