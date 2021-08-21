#include <Shape.h>
#include <System.h>
#include <iostream>

int main(int argc, char** argv)
{
    Shape* practice_model = gsys->loadShape("courses/practice/practice.mod", true);
    if (practice_model) {
        std::cout << "vertex count: " << practice_model->m_vertexCount << std::endl;
        std::cout << "vertex normal count: " << practice_model->m_normalCount << std::endl;
        std::cout << "mesh count: " << practice_model->m_meshCount << std::endl;
        std::cout << "joint count: " << practice_model->m_jointCount << std::endl;
        std::cout << "material count: " << practice_model->m_materialCount << std::endl;
        for (s32 i = 0; i < practice_model->m_materialCount; i++) {
            Material& mat = practice_model->m_materials[i];
            Colour& mat_colour = mat.Colour();
            std::cout << "material [" << i << "] colour:\t" << (u32)mat_colour.m_r << " " << (u32)mat_colour.m_g
                      << " " << (u32)mat_colour.m_b << " " << (u32)mat_colour.m_a << std::endl;
        }
    }

    return EXIT_SUCCESS;
}