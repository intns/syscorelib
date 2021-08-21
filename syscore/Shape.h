#ifndef _SHAPE_H
#define _SHAPE_H

#pragma once
#include <types.hpp>
#include "BaseShape.h"

class DllImport Shape : public BaseShape {
public:
    Shape(class Shape const&);
    Shape(void);
    class Shape& operator=(class Shape const&);
    virtual void optimize(void);
};

#endif
