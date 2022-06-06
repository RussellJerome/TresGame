#include "TresEnemyToyPawnBase.h"

void ATresEnemyToyPawnBase::EndToyWaitMode() {
}

ATresEnemyToyPawnBase::ATresEnemyToyPawnBase() {
    this->m_ToyKind = TRES_ENEMY_TOY_KIND_UNKNOWN;
    this->m_bIsEnableStartPossessionMaterial = false;
    this->m_PossessionEffect = NULL;
    this->m_ResetSlopeSpeed = 360.00f;
    this->m_bIsBlowDamageMotionLoop = true;
    this->m_bIsTossDamageMotionLoop = true;
    this->m_ShootingRideDamageSidePower = 1000.00f;
    this->m_ShootingRideDamageSideBrake = 0.95f;
}

