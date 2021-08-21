#include "Module.h"

#include <types.hpp>

#define EXTERN_DLL_EXPORT extern "C" __declspec(dllexport)
HINSTANCE hInstance;

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason) {
    case DLL_PROCESS_ATTACH:
        hInstance = hinstDLL;
    }

    return 1;
}

extern Object ObjectList[];

EXTERN_DLL_EXPORT Object* GetObjectList()
{
    return (Object*)&ObjectList;
}

EXTERN_DLL_EXPORT Object* NewObject(char* name)
{
    for (Object* i = (Object*)&ObjectList; i->m_name; i++) {
        if (!strcmp(i->m_name, name))
            return ((Object * (*)(void)) i->m_startFunc)();
    }
    return 0;
}

EXTERN_DLL_EXPORT void AutoStart()
{
}
