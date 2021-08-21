#ifndef _EDITBOX_H
#define _EDITBOX_H

#pragma once
#include "ComboBox.h"

#include <types.hpp>

class DllImport EditBox : public ComboBox {
public:
    EditBox(class EditBox const&);
    EditBox(class UIWindow*, int, int, int, bool);
    ~EditBox(void);
    class EditBox& operator=(class EditBox const&);
    virtual void entryHandler(char*);
    virtual int processMessage(struct HWND__*, unsigned int, unsigned int, long);
};

#endif
