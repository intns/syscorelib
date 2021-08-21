#ifndef _RENDERWINDOW_H
#define _RENDERWINDOW_H

#pragma once
#include "UIWindow.h"

#include <types.hpp>

class DllImport RenderWindow : public UIWindow {
public:
    RenderWindow(class RenderWindow const&);
    RenderWindow(class UIWindow*, int, int, int, bool);
    ~RenderWindow(void);
    class RenderWindow& operator=(class RenderWindow const&);
    void clearRender(void);
    virtual void createWindow(char*, char*, struct HMENU__*);
    void initOpenGL(void);
    void paintRender(class RectArea*);
    virtual int processMessage(struct HWND__*, unsigned int, unsigned int, long);
    void shutdownOpenGL(void);
    virtual void update(void);

    u32 m_height;          // _88
    u32 m_width;           // _8C
    HDC m_renderScene;     // _90
    u32 m_dword94;         // _94
    bool m_error;          // _98
    UIWindow* m_boxWindow; // _9C
    Graphics* m_dwordA0;   // _A0
};

#endif
