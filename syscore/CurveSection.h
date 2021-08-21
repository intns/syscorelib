#ifndef _CURVESECTION_H
#define _CURVESECTION_H

#pragma once
#include <types.hpp>

class DllImport CurveSection {
public:
    CurveSection(void);
    class CurveSection& operator=(class CurveSection const&);
    void evaluateAt(int, float);
    void genCurve(int);

    char _00[0x20]; // _00
};

#endif
