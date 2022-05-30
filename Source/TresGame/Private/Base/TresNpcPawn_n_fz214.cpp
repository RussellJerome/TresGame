#include "TresNpcPawn_n_fz214.h"

void ATresNpcPawn_n_fz214::BP_StopUserAI(bool Switch) {
}

void ATresNpcPawn_n_fz214::BP_SetArmorMorphWeight(float Value) {
}

bool ATresNpcPawn_n_fz214::BP_IsAnimEnd(FName InSlotName) const {
    return false;
}

FRotator ATresNpcPawn_n_fz214::BP_GetAnimOffsetValue() const {
    return FRotator{};
}

float ATresNpcPawn_n_fz214::BP_GetAnimOffsetAlpha() const {
    return 0.0f;
}

ATresNpcPawn_n_fz214::ATresNpcPawn_n_fz214() {
    this->m_FRGiantSoldierBP = NULL;
    this->m_AppearCurveData = NULL;
    this->m_FinishCurveData = NULL;
    this->m_fParabolaDamagePower = 4000.00f;
    this->m_fParabolaDamageAngle = 10.00f;
    this->m_fParabolaDamageBrake = 0.85f;
    this->m_fParabolaDamageLimitBrake = 300.00f;
}

