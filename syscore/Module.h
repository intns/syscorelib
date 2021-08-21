#ifndef _MODULE_H
#define _MODULE_H

#pragma once
#include <types.hpp>

class MenuPlugin {
public:
    WPARAM m_prev;      // _00 wparam
    char* m_name;       // _04
    MenuPlugin* m_next; // _08
};

struct Object {
    char* m_name;      // _00
    bool m_toLoad;     // _04
    void* m_startFunc; // _08

    Object(char* name, bool l, void* func)
        : m_name(name)
        , m_toLoad(l)
        , m_startFunc(func)
    {
    }
};

typedef Object* (*DLLFuncVoid)();
typedef void* (*DLLFuncChar)(char*);
typedef int (*allocFunc)(void);

class DllImport Module {
public:
    ~Module(void);
    class Module& operator=(class Module const&);
    void Load(char*);
    void menuPlugins(class MenuPlugin&, struct HMENU__*);

    DLLFuncChar m_newObjAddr;    // _00
    DLLFuncVoid m_objListAddr;   // _04
    DLLFuncVoid m_autoStartAddr; // _08
    HMODULE m_pHInstance;        // _0C
    char* m_libName;             // _10
    Module* m_prev;              // _14
    Module* m_next;              // _18
};

#endif
