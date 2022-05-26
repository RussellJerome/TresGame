#include "TresGumiShipPlayerPawnBase.h"
#include "TresGumiShipSoundSetComponent.h"
#include "TresGumiShipFSM.h"
#include "TresGumiShipPlayerSpringArmCompo.h"
#include "TresGumiShipEffectSetComponent.h"
#include "TresPlayerStateEventComponent.h"

class AActor;

void ATresGumiShipPlayerPawnBase::SetOutsideMaxSpeed(float fSpeed) {
}

void ATresGumiShipPlayerPawnBase::SetMovementEnable(bool bIn) {
}

void ATresGumiShipPlayerPawnBase::SetEventMode(bool bIn) {
}

void ATresGumiShipPlayerPawnBase::SetAccelerationEnable(bool bIn) {
}

void ATresGumiShipPlayerPawnBase::ResetOutsideMaxSpeed() {
}

void ATresGumiShipPlayerPawnBase::RequestWarp(const FVector vLocation, const FRotator Rotation) {
}

void ATresGumiShipPlayerPawnBase::RequestStop(bool bIn) {
}

void ATresGumiShipPlayerPawnBase::RequestMaxSpeed() {
}

void ATresGumiShipPlayerPawnBase::RequestForceStop(bool bIn) {
}

bool ATresGumiShipPlayerPawnBase::RemoteGumiShipPlayerStateEvent(FName EventName, AActor* inActor) {
    return false;
}

bool ATresGumiShipPlayerPawnBase::IsEventMode() const {
    return false;
}

bool ATresGumiShipPlayerPawnBase::IsAvoiding() const {
    return false;
}

ETresGumiShipPlayerMovementType ATresGumiShipPlayerPawnBase::GetPrevMovementType() const {
    return ETresGumiShipPlayerMovementType::MT_NONE_TYPE;
}

ETresGumiShipPlayerMovementType ATresGumiShipPlayerPawnBase::GetMovementType() const {
    return ETresGumiShipPlayerMovementType::MT_NONE_TYPE;
}

void ATresGumiShipPlayerPawnBase::_UndoMovementCompo(const bool bForce) {
}

void ATresGumiShipPlayerPawnBase::_SetCameraLagEnable(bool bLocation, bool bRotation) {
}

void ATresGumiShipPlayerPawnBase::_SetCameraControllEnable(bool bIn) {
}

void ATresGumiShipPlayerPawnBase::_SetAvoiding(bool bIn) {
}

void ATresGumiShipPlayerPawnBase::_RequestCameraReset(const bool bImmediate) {
}

void ATresGumiShipPlayerPawnBase::_OnChnageSpeed(const float fOldSeed, const float fNewSpeed, const float fRatio) {
}

void ATresGumiShipPlayerPawnBase::_ChangeMovementCompo(const ETresGumiShipPlayerMovementType eType, const bool bForce) {
}

void ATresGumiShipPlayerPawnBase::_ChangeAccelerationCompo(const ETresGumiShipPlayerAccelerationType eType, const bool bForce) {
}

ATresGumiShipPlayerPawnBase::ATresGumiShipPlayerPawnBase() {
    this->m_pFSM = CreateDefaultSubobject<UTresGumiShipFSM>(TEXT("FSM"));
    this->m_pSoundSet = CreateDefaultSubobject<UTresGumiShipSoundSetComponent>(TEXT("SoundSet"));
    this->m_pMovementCompo = NULL;
    this->m_pAcceleration = NULL;
    this->m_pCameraSpringArm = CreateDefaultSubobject<UTresGumiShipPlayerSpringArmCompo>(TEXT("CameraSpringArm"));
    this->m_pEffectSet = CreateDefaultSubobject<UTresGumiShipEffectSetComponent>(TEXT("SetEffect"));
    this->m_pStateEvent = CreateDefaultSubobject<UTresPlayerStateEventComponent>(TEXT("PlayerStateEvent"));
}

