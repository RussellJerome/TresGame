#include "TresEnemyPawn_e_ex013.h"

void ATresEnemyPawn_e_ex013::StartCooperationEvent() {
}

bool ATresEnemyPawn_e_ex013::IsSpore() {
    return false;
}

bool ATresEnemyPawn_e_ex013::IsFluff() {
    return false;
}

bool ATresEnemyPawn_e_ex013::IsCooperation() {
    return false;
}

float ATresEnemyPawn_e_ex013::GetPropellerRotRate() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex013::GetPropellerRot() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex013::GetPropellerKoshiRot() const {
    return 0.0f;
}

ATresEnemyPawn_e_ex013::ATresEnemyPawn_e_ex013() {
    this->m_bFluff = false;
    this->m_InvisibleTime = 1.00f;
    this->m_InvisibleTime2 = 0.50f;
    this->m_EffDataAsset = NULL;
    this->m_pro_PropellerRotMaxSpeed = 720.00f;
    this->m_PropellerStCurve = NULL;
    this->m_PropellerEndCurve = NULL;
    this->m_pro_SporePossibleCount = 20;
    this->m_CoopDummyPawn = NULL;
}

