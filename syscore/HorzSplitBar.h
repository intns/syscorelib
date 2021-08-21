#ifndef _HORZSPLITBAR_H
#define _HORZSPLITBAR_H

#pragma once
#include <types.hpp>

class DllImport HorzSplitBar {
public:
    HorzSplitBar(class HorzSplitBar const&);
    HorzSplitBar(class UIWindow*, class UIWindow*, unsigned long, int);
    ~HorzSplitBar(void);
    class HorzSplitBar& operator=(class HorzSplitBar const&);
    virtual void trackMouse(int, int, int);
};

#endif
