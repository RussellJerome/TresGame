#include "TresEnemyPawn_e_ex043.h"

void ATresEnemyPawn_e_ex043::SetWeakAuraPhase() {
}

void ATresEnemyPawn_e_ex043::SetStrongAuraPhase() {
}

void ATresEnemyPawn_e_ex043::ResetPhase() {
}

int32 ATresEnemyPawn_e_ex043::GetPhaseNum() {
    return 0;
}

bool ATresEnemyPawn_e_ex043::DidAttackHit() {
    return false;
}

ATresEnemyPawn_e_ex043::ATresEnemyPawn_e_ex043() {
    this->m_fPitchResetRate = 0.10f;
    this->m_bWheelShowFade = true;
    this->m_fWheelShowDelaySeconds = 0.20f;
    this->m_fWheelShowSeconds = 0.30f;
    this->m_BaseDataTableID_Phase1 = TEXT("Default");
    this->m_BaseDataTableID_Phase2 = TEXT("Default");
    this->m_BaseDataTableID_Phase3 = TEXT("Default");
    this->m_bGroundAdjust = true;
    this->m_fGroundIdealHeight = 2.40f;
    this->m_fGroundAdjustZSpeed = 100.00f;
    this->m_bDebugOutputGroundAdjust = false;
    this->m_bShowWeaponWheel = false;
    this->m_WheelEffectAttachDataAsset = NULL;
}

