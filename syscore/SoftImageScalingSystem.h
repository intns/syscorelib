#ifndef _SOFTIMAGESCALINGSYSTEM_H
#define _SOFTIMAGESCALINGSYSTEM_H

#pragma once
#include <types.hpp>

class DllImport SoftImageScalingSystem {
public:
    SoftImageScalingSystem(class SoftImageScalingSystem const&);
    SoftImageScalingSystem(void);
    class SoftImageScalingSystem& operator=(class SoftImageScalingSystem const&);
    virtual void blah(void);
};

#endif
