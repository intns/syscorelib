#ifndef _UIFRAME_H
#define _UIFRAME_H

#pragma once
#include "Node.h"

#include "RectArea.h"

#include <types.hpp>

class DllImport UIFrame : public Node {
public:
    UIFrame(class UIFrame const&);
    UIFrame(void);
    class UIFrame& operator=(class UIFrame const&);
    void calcClientFromFrame(class RectArea&);
    void calcFrameFromClient(class RectArea&);
    void setClient(class RectArea&);
    void setFrame(class RectArea&);

    RectArea m_frame;  // _20
    RectArea m_zero;   // _30
    RectArea m_client; // _40
};

#endif
