#ifndef _ATXCOMMANDSTREAM_H
#define _ATXCOMMANDSTREAM_H

#pragma once
#include "AtxStream.h"

#include <types.hpp>

class DllImport AtxCommandStream : public AtxStream {
public:
    AtxCommandStream(class AtxCommandStream const&);
    AtxCommandStream(class BaseApp*);
    class AtxCommandStream& operator=(class AtxCommandStream const&);
    int checkCommands(void);

    BaseApp* m_app; // _10
};

#endif
