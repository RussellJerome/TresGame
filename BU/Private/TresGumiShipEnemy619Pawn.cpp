#include "TresGumiShipEnemy619Pawn.h"
#include "TresSkeletalMeshComponent.h"

void ATresGumiShipEnemy619Pawn::SetRocketPunch(int32 NO) {
}

bool ATresGumiShipEnemy619Pawn::SetLaserAngle(float fAngle) {
    return false;
}

bool ATresGumiShipEnemy619Pawn::ResetLaser() {
    return false;
}

bool ATresGumiShipEnemy619Pawn::IsRightEnable() {
    return false;
}

bool ATresGumiShipEnemy619Pawn::IsLeftEnable() {
    return false;
}

ATresGumiShipEnemy619Pawn::ATresGumiShipEnemy619Pawn() {
    this->m_fGatlingTime = 3.00f;
    this->m_fGatlingSpeed = 50.00f;
    this->m_fGatlingRand = 8.00f;
    this->m_fLaserTime = 5.00f;
    this->m_fLaserCloseTime = 2.00f;
    this->m_fLaserAngle = 0.50f;
    this->m_fBlindSpotTime = 2.00f;
    this->m_fIdolingTime = 1.00f;
    this->m_fAdvanceDistance = 3000.00f;
    this->m_pShotVFX = NULL;
    this->m_pShoulderPartsVFX = NULL;
    this->m_StartShoulderG = 1.80f;
    this->m_EndShoulderG = 1.80f;
    this->m_StartShoulderTime = 1.80f;
    this->m_EndShoulderTime = 1.80f;
    this->m_pUFOMuzzleVFX = NULL;
    this->m_StartUFOMuzzleVFX = 1.80f;
    this->m_EndUFOMuzzleVFX = 1.80f;
    this->m_pVernierVFX = NULL;
    this->m_pUFO_SkeletalMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("UFO"));
}

