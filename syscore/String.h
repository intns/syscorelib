#ifndef _STRING_H
#define _STRING_H
#pragma once

#include <types.hpp>

class DllImport String {
public:
    String(int);
    String(char*, int);
    String(void);
    ~String() = default;

    void init(int len);

    int m_length = 0;      // _00
    char* m_str = nullptr; // _04
};

#endif
