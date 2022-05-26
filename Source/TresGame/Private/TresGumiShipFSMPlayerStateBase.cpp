#include "TresGumiShipFSMPlayerStateBase.h"

class USceneComponent;
class ATresGumiShipPlayerControllerDefault;
class ATresGumiShipPlayerPawnBase;
class UTresGumiShipPlayerMovementCompoBase;
class UTresGumiShipEffectSetComponent;

bool UTresGumiShipFSMPlayerStateBase::_WasJustReleased(const FString& rstrID) const {
    return false;
}

bool UTresGumiShipFSMPlayerStateBase::_WasJustPressed(const FString& rstrID) const {
    return false;
}

void UTresGumiShipFSMPlayerStateBase::_SetNoBody(bool bIn, const float fTimer) {
}

void UTresGumiShipFSMPlayerStateBase::_SetInvincibleWithTimer(bool bIn, const float fTimer) {
}

void UTresGumiShipFSMPlayerStateBase::_SetInvincible(bool bIn) {
}

void UTresGumiShipFSMPlayerStateBase::_SetEventMode(bool bIn) {
}

void UTresGumiShipFSMPlayerStateBase::_SetEnableOperation(bool bIn) {
}

void UTresGumiShipFSMPlayerStateBase::_SetAvoiding(bool bIn) {
}

void UTresGumiShipFSMPlayerStateBase::_PlaySoundAtLocation(const int32 dAssetID, const FVector& vrLocation, const FRotator& rRotation, float fVolumeMultiplier, float fPitchMultiplier, float fStartTime) {
}

void UTresGumiShipFSMPlayerStateBase::_PlaySound2D(const int32 dAssetID, float fVolumeMultiplier, float fPitchMultiplier, float fStartTime) {
}

FVector2D UTresGumiShipFSMPlayerStateBase::_GetStickValue(const FString& rstrID) const {
    return FVector2D{};
}

ATresGumiShipPlayerPawnBase* UTresGumiShipFSMPlayerStateBase::_GetPlayer() const {
    return NULL;
}

UTresGumiShipPlayerMovementCompoBase* UTresGumiShipFSMPlayerStateBase::_GetMovementCompo() const {
    return NULL;
}

USceneComponent* UTresGumiShipFSMPlayerStateBase::_GetModelBase() const {
    return NULL;
}

UTresGumiShipEffectSetComponent* UTresGumiShipFSMPlayerStateBase::_GetEffectSet() const {
    return NULL;
}

float UTresGumiShipFSMPlayerStateBase::_GetDownTime(const FString& rstrID) const {
    return 0.0f;
}

ATresGumiShipPlayerControllerDefault* UTresGumiShipFSMPlayerStateBase::_GetController() const {
    return NULL;
}

float UTresGumiShipFSMPlayerStateBase::_GetAnalogValue(const FString& rstrID) const {
    return 0.0f;
}

UTresGumiShipFSMPlayerStateBase::UTresGumiShipFSMPlayerStateBase() {
}

