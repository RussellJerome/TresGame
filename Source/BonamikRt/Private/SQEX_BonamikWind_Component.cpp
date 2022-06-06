#include "SQEX_BonamikWind_Component.h"

void USQEX_BonamikWind_Component::SetWindScale(float Value) {
}

float USQEX_BonamikWind_Component::GetWindScale() const {
    return 0.0f;
}

void USQEX_BonamikWind_Component::Enable(bool Value) {
}

USQEX_BonamikWind_Component::USQEX_BonamikWind_Component() {
    this->m_BonamikWindDesc = NULL;
    this->m_BonamikWindAreaType = ESQEX_Bonamik_WindAreaType_Global;
    this->m_BonamikWindGlobalAddition = false;
    this->m_BonamikWindSphereAreaRadius = 50.00f;
    this->m_BonamikWindAreaMargin = 0.00f;
    this->m_BonamikWindAbsoluteDirection = false;
    this->m_BonamikWindDirectionYaw = 0.00f;
    this->m_BonamikWindDirectionPitch = 0.00f;
    this->m_BonamikWind = NULL;
}

