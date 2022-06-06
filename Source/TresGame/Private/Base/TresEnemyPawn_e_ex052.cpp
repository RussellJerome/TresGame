#include "TresEnemyPawn_e_ex052.h"

class ATresCharPawnBase;

void ATresEnemyPawn_e_ex052::SetScore(const int32 Score) {
}

void ATresEnemyPawn_e_ex052::SetMinSpeed(const float MinSpeed) {
}

void ATresEnemyPawn_e_ex052::SetMaxSpeed(const float MaxSpeed) {
}

void ATresEnemyPawn_e_ex052::SetEatContinueRate(const float Rate) {
}

void ATresEnemyPawn_e_ex052::SetEatContinueMax(const int32 Max) {
}

void ATresEnemyPawn_e_ex052::SetChildrenHaveMax(const int32 Max) {
}

void ATresEnemyPawn_e_ex052::NotifyStop() {
}




bool ATresEnemyPawn_e_ex052::IsCanCreateChildren(const int32 CreateNum) const {
    return false;
}

int32 ATresEnemyPawn_e_ex052::GetScore() const {
    return 0;
}

float ATresEnemyPawn_e_ex052::GetMinSpeed() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex052::GetMaxSpeed() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex052::GetEatContinueRate() const {
    return 0.0f;
}

int32 ATresEnemyPawn_e_ex052::GetEatContinueMax() const {
    return 0;
}

int32 ATresEnemyPawn_e_ex052::GetChildrenNum() const {
    return 0;
}

int32 ATresEnemyPawn_e_ex052::GetChildrenHaveMax() const {
    return 0;
}

void ATresEnemyPawn_e_ex052::EatPawn(ATresCharPawnBase* pPawn) {
}

int32 ATresEnemyPawn_e_ex052::CreateChildren(const int32 CreateNum) {
    return 0;
}

ATresEnemyPawn_e_ex052::ATresEnemyPawn_e_ex052() {
    this->m_bBigPudding = false;
    this->m_Score = 10;
    this->m_MoveSpeedMax = 600.00f;
    this->m_MoveSpeedMin = 1200.00f;
    this->m_EatContinueMax = 3;
    this->m_EatContinueRate = 0.33f;
    this->m_TeleportPlayerDistance = 0.00f;
    this->m_ChildrenHaveMax = 0;
    this->m_EatStep = 0;
    this->m_bNotifyStop = false;
    this->m_bCinematicIdleMotion = true;
}

