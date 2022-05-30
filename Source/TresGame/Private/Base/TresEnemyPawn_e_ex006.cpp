#include "TresEnemyPawn_e_ex006.h"

bool ATresEnemyPawn_e_ex006::IsIncludeFormation() {
    return false;
}

bool ATresEnemyPawn_e_ex006::IsFormationMode() {
    return false;
}

bool ATresEnemyPawn_e_ex006::IsCoopMode() const {
    return false;
}

bool ATresEnemyPawn_e_ex006::IsBrokenHorn() {
    return false;
}

bool ATresEnemyPawn_e_ex006::IsBeforeReactionGuardReflect() {
    return false;
}

ATresEnemyPawn_e_ex006::ATresEnemyPawn_e_ex006() {
    this->m_NearIdleDistance = 500.00f;
    this->m_CoopScrumManagerAsset = NULL;
    this->m_IgnoreStepHeight = 250.00f;
    this->m_bCoopDebug = false;
    this->m_bCoopPawn = false;
    this->m_SmallDamagePower = 550.00f;
    this->m_SmallDamageBrake = 0.95f;
    this->m_GuardReflectKnockBackPower = 550.00f;
    this->m_GuardReflectKnockBackBrake = 0.90f;
    this->m_ReflectKnockBackPower = 550.00f;
    this->m_ReflectKnockBackBrake = 0.90f;
}

