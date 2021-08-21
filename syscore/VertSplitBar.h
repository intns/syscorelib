#ifndef _VERTSPLITBAR_H
#define _VERTSPLITBAR_H

#pragma once
#include "SplitBar.h"

#include <types.hpp>

class DllImport VertSplitBar : public SplitBar {
public:
    VertSplitBar(class VertSplitBar const&);
    VertSplitBar(class UIWindow*, class UIWindow*, unsigned long, int);
    ~VertSplitBar(void);
    class VertSplitBar& operator=(class VertSplitBar const&);
    virtual void trackMouse(int, int, int);
};

#endif
