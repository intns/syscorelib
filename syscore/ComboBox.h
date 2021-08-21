#ifndef _COMBOBOX_H
#define _COMBOBOX_H

#pragma once
#include "UIWindow.h"

#include <types.hpp>

class DllImport ComboBox : public UIWindow {
public:
    ComboBox(class ComboBox const&);
    ComboBox(class UIWindow*, int, int, int, bool);
    ~ComboBox(void);
    class ComboBox& operator=(class ComboBox const&);
    void addOption(char*, bool);
    virtual void createWindow(char*, char*, struct HMENU__*);
    virtual void entryHandler(char*);
    virtual int processMessage(struct HWND__*, unsigned int, unsigned int, long);
    void selOption(int);

    UIWindow* m_boxWindow; // _88
    u32 m_boxExStyle;      // _8C
};

#endif
