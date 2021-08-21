#ifndef _MODULEMGR_H
#define _MODULEMGR_H

#pragma once
#include "Module.h"

#include <types.hpp>

class DllImport ModuleMgr {
public:
    ModuleMgr(void);
    ~ModuleMgr(void);
    class ModuleMgr& operator=(class ModuleMgr const&);
    void* Alloc(char*);
    void UnLoad(class Module*);
    class Module* findModule(char*);
    void listModules(void);
    class Module* loadModule(char*);

    Module* m_topModule; // _00
    int m_moduleCount;   // _04
};

#endif
