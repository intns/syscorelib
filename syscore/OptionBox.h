#ifndef _OPTIONBOX_H
#define _OPTIONBOX_H

#pragma once
#include "ComboBox.h"

#include <types.hpp>

class DllImport OptionBox : public ComboBox {
public:
    OptionBox(class OptionBox const&);
    OptionBox(class UIWindow*, int, int, int, bool);
    ~OptionBox(void);
    class OptionBox& operator=(class OptionBox const&);
    virtual int processMessage(struct HWND__*, unsigned int, unsigned int, long);
    virtual void selectionChanged(int);
};

#endif
