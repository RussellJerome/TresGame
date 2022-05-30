#include "TresEnemyPawnBase_e_he90y.h"

bool ATresEnemyPawnBase_e_he90y::IsOtherAttacking() {
    return false;
}

bool ATresEnemyPawnBase_e_he90y::CanAttack() {
    return false;
}

FRotator ATresEnemyPawnBase_e_he90y::BP_GetAnimOffsetValue() const {
    return FRotator{};
}

float ATresEnemyPawnBase_e_he90y::BP_GetAnimOffsetAlpha() const {
    return 0.0f;
}

ATresEnemyPawnBase_e_he90y::ATresEnemyPawnBase_e_he90y() {
    this->m_AimOffsetYawThreshold = 0.00f;
    this->m_AimOffsetPitchThreshold = 0.00f;
    this->m_fIgnoreAimOffsetRadius = 0.00f;
    this->m_fIgnoreAimOffsetHeight = 0.00f;
    this->m_fWorldFloorHeight = 0.00f;
    this->m_AimOffsetTestActor = NULL;
}

