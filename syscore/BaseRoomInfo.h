#ifndef _BASEROOMINFO_H
#define _BASEROOMINFO_H

#pragma once
#include <types.hpp>

class DllImport BaseRoomInfo {
public:
    class BaseRoomInfo& operator=(class BaseRoomInfo const&);
    void read(class RandomAccessStream&);
    void write(class RandomAccessStream&);

    s32 m_info; // _00
};

#endif
