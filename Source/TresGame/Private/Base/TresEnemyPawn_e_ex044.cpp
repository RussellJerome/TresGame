#include "TresEnemyPawn_e_ex044.h"

bool ATresEnemyPawn_e_ex044::IsPlayerPoleTurning() {
    return false;
}

bool ATresEnemyPawn_e_ex044::IsOnWall() {
    return false;
}

bool ATresEnemyPawn_e_ex044::IsOnAIPoint() {
    return false;
}

float ATresEnemyPawn_e_ex044::GetNormHeightFromWorldPositionWithinPipe(FVector InPos, float inUnder, float inTop) {
    return 0.0f;
}

float ATresEnemyPawn_e_ex044::GetNormHeightFromWorldPosition(FVector InPos) {
    return 0.0f;
}


FVector ATresEnemyPawn_e_ex044::GetBodyLocation() {
    return FVector{};
}

FRotator ATresEnemyPawn_e_ex044::FindRotationBetweenVectors(const FVector& From, const FVector& To) {
    return FRotator{};
}



void ATresEnemyPawn_e_ex044::ActivatePoleComp(bool bActive) {
}

ATresEnemyPawn_e_ex044::ATresEnemyPawn_e_ex044() {
    this->m_fHeight = 0.00f;
    this->m_fYaw = 0.00f;
    this->m_fPitch = 0.00f;
    this->m_bPipeVisible = false;
    this->m_pPlayer = NULL;
    this->m_pPoleComp = NULL;
    this->m_fMaxPitchAngle = 0.00f;
    this->m_fMinPitchAngle = 0.00f;
    this->m_fPoleTurnChangeAngle = 0.00f;
    this->m_fPoleTurnUnderHeight = 0.00f;
    this->m_fPoleTurnTopHeight = 0.00f;
    this->m_fMaxPipeLength = 1500.00f;
    this->m_bAIPawnOnWall = false;
    this->m_fPitchVelocity = 0.00f;
    this->m_fPitchAccel = 0.00f;
    this->m_fPitchDamp1 = 0.00f;
    this->m_fPitchDamp2 = 0.00f;
    this->m_fPitchChangeDampAngle = 0.00f;
    this->m_fPitchAccept = 0.00f;
    this->m_fPitchVib = 0.00f;
    this->m_fYawVelocity = 0.00f;
    this->m_fYawAccel = 0.00f;
    this->m_fYawDamp1 = 0.00f;
    this->m_fYawDamp2 = 0.00f;
    this->m_fYawChangeDampAngle = 0.00f;
    this->m_fYawAccept = 0.00f;
    this->m_fYawVib = 0.00f;
}

