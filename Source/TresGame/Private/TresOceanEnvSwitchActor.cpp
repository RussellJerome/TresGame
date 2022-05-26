#include "TresOceanEnvSwitchActor.h"

void ATresOceanEnvSwitchActor::BP_SetOceanMaterialIndex(int32 InOverSeaIndex, int32 InUnderSeaIndex) {
}

ATresOceanEnvSwitchActor::ATresOceanEnvSwitchActor() {
    this->m_bChangeOceanMaterialIndex = false;
    this->m_pOceanController = NULL;
    this->m_OceanMaterialOverSea = 0;
    this->m_OceanMaterialUnderSea = 0;
    this->m_bChangeOceanPostProcessVolume = false;
    this->m_pPostProcessOverSea = NULL;
    this->m_pPostProcessUnderSea = NULL;
    this->m_PostProcessBlendTime = 0.00f;
    this->m_bChangeLightProperty = false;
    this->m_pLightPropertyChangeActor = NULL;
    this->m_TemperatureOverSea = 6500.00f;
    this->m_TemperatureUnderSea = 9000.00f;
    this->m_InLensEffectClass = NULL;
    this->m_OutLensEffectClass = NULL;
}

