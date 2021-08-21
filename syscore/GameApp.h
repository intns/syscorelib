#ifndef _GAMEAPP_H
#define _GAMEAPP_H

#pragma once
#include "BaseApp.h"

#include "ToolWindow.h"

#include <types.hpp>

class DllImport GameApp : public BaseApp {
public:
    GameApp(class GameApp const&);
    GameApp(void);
    virtual ~GameApp(void);
    class GameApp& operator=(class GameApp const&);
    void doInitApp(void);
    virtual int idle(void);
    void renderall(void);

    ToolWindow* m_window; // _54
    u8 m_pendingMessage;  // _58
};

#endif
