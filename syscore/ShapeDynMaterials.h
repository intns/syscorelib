#ifndef _SHAPEDYNMATERIALS_H
#define _SHAPEDYNMATERIALS_H

#pragma once
#include <types.hpp>

class DllImport ShapeDynMaterials {
public:
    ShapeDynMaterials(void);
    class ShapeDynMaterials& operator=(class ShapeDynMaterials const&);
    void animate(float*);
    void updateContext(void);
};

#endif
