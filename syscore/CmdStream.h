#ifndef _CMDSTREAM_H
#define _CMDSTREAM_H

#pragma once
#include <types.hpp>

class DllImport CmdStream {
public:
    CmdStream(class Stream*);
    CmdStream(void);
    class CmdStream& operator=(class CmdStream const&);
    bool LineIsComment(void);
    void copyToToken(int);
    bool endOfCmds(void);
    bool endOfSection(void);
    void fillBuffer(bool);
    char* getToken(bool);
    void init(class Stream*);
    bool isToken(char*);
    char nextChar(void);
    char* skipLine(void);
    bool whiteSpace(char);

    Stream* m_stream;           // _00
    char* m_cmdBuffer;          // _04
    char m_currentToken[0x100]; // _08
    u32 m_size;                 // _108
    u32 m_dword10C;             // _10C
    u32 m_dword110;             // _110
    u32 m_bufferIdx;            // _114
    static char* statbuff;
};

#endif
