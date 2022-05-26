#include "TresGumiShipEnemy621Pawn.h"
#include "TresGumiShipAtkCollisionSetCompo.h"
#include "TresGumiShipWeaponSequence.h"

void ATresGumiShipEnemy621Pawn::ToVisibleBodyMaterial(float fDuration) {
}

void ATresGumiShipEnemy621Pawn::ToStealthBodyMaterial(float fDuration) {
}

void ATresGumiShipEnemy621Pawn::SetSplineMoveSpeed(float Speed) {
}

void ATresGumiShipEnemy621Pawn::SetSplineMoveDeceleration(float Deceleration) {
}

void ATresGumiShipEnemy621Pawn::SetSplineMoveAcceleration(float Acceleration) {
}

void ATresGumiShipEnemy621Pawn::SetReverseSplineMove(bool bReverseMoveEnable) {
}

void ATresGumiShipEnemy621Pawn::SetMaxSplineMoveSpeed(float MaxSpeed) {
}

void ATresGumiShipEnemy621Pawn::SetIdlingStateTime(float fTime) {
}

void ATresGumiShipEnemy621Pawn::SetEnableBodyCollision(bool bEnable) {
}

void ATresGumiShipEnemy621Pawn::SetDamageArrestDustShoot(float fDamage) {
}

void ATresGumiShipEnemy621Pawn::PauseSplineMove(bool bPauseEnable) {
}

void ATresGumiShipEnemy621Pawn::OnStopMineSpray() {
}

void ATresGumiShipEnemy621Pawn::OnShotMineSpray(bool bManual) {
}



bool ATresGumiShipEnemy621Pawn::IsReverseSplineMove() const {
    return false;
}

bool ATresGumiShipEnemy621Pawn::IsPauseSplineMove() const {
    return false;
}

bool ATresGumiShipEnemy621Pawn::IsArrivedSplineEnd() const {
    return false;
}

float ATresGumiShipEnemy621Pawn::GetSplineMoveSpeed() const {
    return 0.0f;
}

float ATresGumiShipEnemy621Pawn::GetSplineMoveDeceleration() const {
    return 0.0f;
}

float ATresGumiShipEnemy621Pawn::GetSplineMoveAcceleration() const {
    return 0.0f;
}

float ATresGumiShipEnemy621Pawn::GetMaxSplineMoveSpeed() const {
    return 0.0f;
}

void ATresGumiShipEnemy621Pawn::_OnSplinePathMoveEvent(ETresGumiShipSplineEventType eEventType) {
}

bool ATresGumiShipEnemy621Pawn::_IsSecondPhase() {
    return false;
}

bool ATresGumiShipEnemy621Pawn::_IsBrokenDustShootMuzzle() {
    return false;
}

void ATresGumiShipEnemy621Pawn::_AttachNewRootSpline(int32 dIndex) {
}

ATresGumiShipEnemy621Pawn::ATresGumiShipEnemy621Pawn() {
    this->m_pEatAtkCollision = CreateDefaultSubobject<UTresGumiShipAtkCollisionSetCompo>(TEXT("EatAtkCollision"));
    this->m_pDustWeaponSequence = CreateDefaultSubobject<UTresGumiShipWeaponSequence>(TEXT("GM621WeaponSequence"));
    this->m_pUniqueAttachDataAsset = NULL;
    this->m_pMuzzleVFX = NULL;
    this->m_pArrestEffect = NULL;
    this->m_pBrokenEffect = NULL;
    this->m_fChargeArrestDamage = 5000.00f;
    this->m_nBreakArrestCount = 3;
    this->m_fIdlingStateTime = 3.00f;
    this->m_fNextPhaseHpThreshold = 50.00f;
    this->m_fDustShootPlaySpeed = 1.50f;
    this->m_fContinuosBiteTime = 5.00f;
    this->m_dDefeatedEnemyCount = 0;
    this->TailMass = 2000.00f;
    this->TailBrake = 0.98f;
    this->WaveSpeed = 0.20f;
    this->TailBlend = false;
}

