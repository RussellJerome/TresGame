#include "TresEnemyPawn_e_ex359.h"

bool ATresEnemyPawn_e_ex359::IsNowFinalBrake() const {
    return false;
}

bool ATresEnemyPawn_e_ex359::IsNowBerserkCombo() const {
    return false;
}

bool ATresEnemyPawn_e_ex359::IsNowAirCombo() const {
    return false;
}

bool ATresEnemyPawn_e_ex359::IsFinalBrakeEnd() const {
    return false;
}

bool ATresEnemyPawn_e_ex359::IsFinalBrakeArmorBrakeSucceeded() const {
    return false;
}

bool ATresEnemyPawn_e_ex359::IsFastMoveMode() const {
    return false;
}

bool ATresEnemyPawn_e_ex359::IsDamageBodyReactionCoroutineFinished() const {
    return false;
}

ATresEnemyPawn_e_ex359::ATresEnemyPawn_e_ex359() {
    this->m_BodyReactionTypeWhileStun = ETresBodyCollReactionType::TRES_BODY_RT_INVINCIBLE;
    this->m_BodyReactionTypeWhileFinalBrake = ETresBodyCollReactionType::TRES_BODY_RT_INVINCIBLE;
    this->m_bIgnoreBodyReacyionNotifyWhileFinalBrake = true;
    this->m_BodyReactionTypeWhileArmorMode = ETresBodyCollReactionType::STRONG;
    this->m_SplineComp = NULL;
    this->m_bBonamikResetBody = false;
    this->m_WhiteOutParticleClass = NULL;
    this->m_WhiteOutParticleComp = NULL;
    this->m_FinalBrakeFloorParticleClass = NULL;
    this->m_ArmorBrakeBlowPower = 0.00f;
    this->m_ArmorBrakeBlowDamageStartBrakeTime = 0.00f;
    this->m_ArmorBrakeBlowDamageVelocityZ = 0.00f;
    this->m_fMaxAccelVoiceProhibitTime = 0.00f;
    this->m_pWeaponKeyBlade = NULL;
    this->m_pWeaponClaymore = NULL;
}

