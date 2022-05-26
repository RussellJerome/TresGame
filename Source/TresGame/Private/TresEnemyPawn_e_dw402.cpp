#include "TresEnemyPawn_e_dw402.h"

void ATresEnemyPawn_e_dw402::ShiftE3Die() {
}

float ATresEnemyPawn_e_dw402::GetHitTimer() {
    return 0.0f;
}

ATresEnemyPawn_e_dw402::ATresEnemyPawn_e_dw402() {
    this->m_ShadowSpawnEff = NULL;
    this->m_ShadowDiveEff = NULL;
    this->m_HeadEff = NULL;
    this->m_RiseEff = NULL;
    this->m_ShadowSpawnEffData = NULL;
    this->m_ShadowDiveEffData = NULL;
    this->m_HeadEffData = NULL;
    this->m_RiseEffData = NULL;
    this->m_pro_LockOnRange = 0.00f;
    this->m_bCommonDie = true;
    this->m_HitTime = 1.00f;
    this->m_EventActionData = NULL;
    this->m_IsShiftE3Die = false;
    this->m_HitTimer = 0.00f;
}

