#ifndef _DATACHUNK_H
#define _DATACHUNK_H

#pragma once
#include <types.hpp>

class DllImport DataChunk {
public:
    DataChunk(void);
    class DataChunk& operator=(class DataChunk const&);
    void addData(float);
    void getData(class CmdStream*);
    void read(class RandomAccessStream&);
    void setDataSize(int);
    void write(class RandomAccessStream&);

    int m_dataIndex; // _00
    int m_dataSize;  // _04
    float* m_data;   // _08
};

#endif
