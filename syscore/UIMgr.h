#ifndef _UIMGR_H
#define _UIMGR_H

#pragma once
#include "Node.h"

#include <types.hpp>

class DllImport UIMgr : public Node {
public:
    UIMgr(class UIMgr const&);
    UIMgr(void);
    ~UIMgr(void);
    class UIMgr& operator=(class UIMgr const&);
    void RegisterGenWindowClass(char*, void*, bool);
    void activateWindow(struct HWND__*, class UIWindow*);
    bool isActive(void);

    Node m_top; // _20
};

#endif
