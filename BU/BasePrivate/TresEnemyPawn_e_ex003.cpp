#include "TresEnemyPawn_e_ex003.h"

void ATresEnemyPawn_e_ex003::SetFlameMode(bool NewIsFlameMode) {
}

bool ATresEnemyPawn_e_ex003::IsWeak() {
    return false;
}

bool ATresEnemyPawn_e_ex003::IsFlameMode() {
    return false;
}

bool ATresEnemyPawn_e_ex003::IsFlameAction() {
    return false;
}

float ATresEnemyPawn_e_ex003::GetFullBody2BlendRate() const {
    return 0.0f;
}

ATresEnemyPawn_e_ex003::ATresEnemyPawn_e_ex003() {
    this->m_MeteorMoveSpeed = 1600.00f;
    this->m_EffDataAsset = NULL;
    this->m_pro_ChangeFlameMaterialTime = 1.00f;
    this->m_pro_DamageFlameModeShiftHp = 50;
    this->m_pro_DamageFlameModeShiftProbability[0] = 50;
    this->m_pro_DamageFlameModeShiftProbability[1] = 50;
    this->m_pro_DamageFlameModeShiftProbability[2] = 50;
    this->m_pro_DamageFlameModeShiftProbability[3] = 50;
    this->m_pro_NextFlameModeTime = 0;
    this->m_pro_WeakTime = 0.00f;
    this->m_IsFlameMode = false;
}

