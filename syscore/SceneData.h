#ifndef _SCENEDATA_H
#define _SCENEDATA_H

#pragma once
#include <types.hpp>
#include "CoreNode.h"

#include "DataChunk.h"

#include "CamDataInfo.h"

#include "LightDataInfo.h"


class DllImport SceneData : public CoreNode {
public:
    SceneData(class SceneData const&);
    SceneData(void);
    class SceneData& operator=(class SceneData const&);
    virtual void genAge(class AgeServer&);
    void getAnimInfo(class CmdStream*);
    void parse(class CmdStream*);

    DataChunk* m_cameraAnims;   // _14
    DataChunk* m_difLightAnims; // _18
    CamDataInfo* m_cameraData;  // _1C
    LightDataInfo* m_lightData; // _20
    u32 m_numFrames;            // _24
    u32 m_numCameras;           // _28
    u32 m_numDifLights;         // _2C
};

#endif
