#ifndef _UIWINDOW_H
#define _UIWINDOW_H

#pragma once
#include "RectArea.h"

#include "UIFrame.h"

#include <types.hpp>
#include <windows.h>

class DllImport UIWindow : public UIFrame {
public:
    UIWindow(class UIWindow const&);
    UIWindow(class UIWindow*, int, int, int, bool);
    UIWindow(void);
    ~UIWindow(void);
    class UIWindow& operator=(class UIWindow const&);
    void closeChildren(void);
    void initFrame(class UIWindow*, int, int, int, bool);
    void sizeWindow(int, int, int);
    void updateMove(int, int);

    virtual void refreshWindow(void);
    virtual void updateSizes(int, int);
    virtual void activate(void);
    virtual int processMessage(HWND hWnd, unsigned int Msg, WPARAM wParam, long lParam);
    virtual int returnMessage(struct HWND__*, unsigned int, unsigned int, long);
    virtual void* resizeChildren(void*, class RectArea&);
    virtual void* resizeFrame(void*, class RectArea&);
    virtual void createWindow(char*, char*, struct HMENU__*);
    virtual void dockTop(int, class RectArea&, class RectArea&);

    RectArea m_rectArea50; // _50
    UIWindow* m_parent;    // _60
    HWND m_hWnd;           // _64
    int m_dwStyle;         // _68
    int m_dwExStyle;       // _6C
    int m_dword70;         // _70
    int m_dword74;         // _74
    int m_width;           // _78
    int m_height;          // _7C
    bool m_byte80;         // _80
    HMENU m_hMenu;         // _84
};

#endif
