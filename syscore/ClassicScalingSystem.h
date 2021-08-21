#ifndef _CLASSICSCALINGSYSTEM_H
#define _CLASSICSCALINGSYSTEM_H

#pragma once
#include <types.hpp>

class DllImport ClassicScalingSystem {
public:
    ClassicScalingSystem(class ClassicScalingSystem const&);
    ClassicScalingSystem(void);
    class ClassicScalingSystem& operator=(class ClassicScalingSystem const&);
    virtual void blah(void);
};

#endif
