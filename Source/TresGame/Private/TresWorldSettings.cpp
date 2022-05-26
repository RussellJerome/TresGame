#include "TresWorldSettings.h"

ATresWorldSettings::ATresWorldSettings() {
    this->m_WorldCode = TRES_WCID_ZZ;
    this->m_WorldAreaCode = TRES_WAID_AREA_00;
    this->m_AttractionFlowDrawingEnable = false;
    this->m_PhysMatEffects = NULL;
    this->m_EffectAreaCode = TRES_EFFECT_AREA_00;
    this->m_EffectBaseColorTable = NULL;
}

