#ifndef _ID32_H
#define _ID32_H

#pragma once
#include <types.hpp>

class DllImport ID32 {
public:
    ID32(void);
    ID32(unsigned __int32);
    class ID32& operator=(class ID32 const&);
    void operator=(unsigned __int32);
    bool operator==(unsigned __int32);
    bool operator!=(unsigned __int32);
    void ageChangeID(void);
    void genAge(class AgeServer&, char*);
    bool match(unsigned __int32, char);
    void print(void);
    void read(class RandomAccessStream&);
    void setID(unsigned __int32);
    void sprint(char*);
    void updateID(void);
    void updateString(void);
    void write(class RandomAccessStream&);

    unsigned __int32 id; // _0
    char sId[5];         // _4
};

#endif
