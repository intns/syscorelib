#ifndef _AYUSTACK_H
#define _AYUSTACK_H

#pragma once
#include <types.hpp>

class DllImport AyuStack {
public:
    AyuStack(void);
    class AyuStack& operator=(class AyuStack const&);
    bool checkOverflow(void);
    void checkStack(void);
    void create(char*, int, void*, int, bool);
    int getFree(void);
    int getMaxFree(void);
    int getSize(void);
    int getTopUsed(void);
    int getUsed(void);
    void inactivate(void);
    void pop(void);
    void* push(int);
    void reset(int);
    void reset(void);
    int setAllocType(int);

    s32 m_allocType;        // _00
    s32 m_size;             // _04
    s32 m_used;             // _08
    u32* m_top;             // _0C
    s32 m_topSize;          // _10
    u32* m_sp;              // _14
    s32 m_topFree;          // _18
    bool m_overflowProtect; // _1C
    bool m_active;          // _1D
    s8* m_name;             // _20
};

#endif
