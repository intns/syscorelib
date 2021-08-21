#ifndef _DEFINES_H
#define _DEFINES_H

#pragma once
#include <cassert>
#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <windows.h>

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define EXPECT_SIZE(type, size) static_assert(sizeof(type) == size, TOSTRING(type) " size mismatch, expected " TOSTRING(size))

#define DllImport __declspec(dllimport)

typedef std::uint64_t u64;
typedef std::uint32_t u32;
typedef std::uint16_t u16;
typedef std::uint8_t u8;
typedef std::int64_t s64;
typedef std::int32_t s32;
typedef std::int16_t s16;
typedef std::int8_t s8;

typedef float f32;
typedef double f64;

extern DllImport HINSTANCE sysHInst;
extern DllImport class Stream* sysCon;
extern DllImport class Stream* sysCon;
extern DllImport HWND sysCurrWnd;
extern DllImport int glnHeight;
extern DllImport int glnWidth;
extern DllImport WNDPROC lpPrevWndFunc;
extern DllImport class NodeMgr* nodeMgr;
extern DllImport class ModuleMgr* modMgr;
extern DllImport class UIMgr* uiMgr;

#endif
