#include "TresGimmickRecord.h"

class USoundBase;
class USceneComponent;

void ATresGimmickRecord::SetSpeedRateImidiately(float Rate) {
}

void ATresGimmickRecord::SetRecordActive_Implementation(bool NewActive) {
}

void ATresGimmickRecord::SetPitchFade(float Rate, float FadeTime) {
}

void ATresGimmickRecord::SetMaxRotationRate(float Rate) {
}

void ATresGimmickRecord::SetLockInput(bool Enable) {
}

void ATresGimmickRecord::SetHiddenRegistedFrogs(bool bNewHidden) {
}

void ATresGimmickRecord::SetFinished(bool Finish) {
}

void ATresGimmickRecord::SetBgm(USoundBase* NewSound) {
}

void ATresGimmickRecord::SetAutomaticRotate(float NewSpeedRate) {
}

void ATresGimmickRecord::SetAttachedParent(USceneComponent* pAttachedParent) {
}

bool ATresGimmickRecord::IsFinished() const {
    return false;
}

void ATresGimmickRecord::CutsceneEndRecord() {
}

void ATresGimmickRecord::ClearPitchFade() {
}

void ATresGimmickRecord::ChangePlayingState_Implementation(bool Playing) {
}

ATresGimmickRecord::ATresGimmickRecord() {
    this->AngleDumping = 0.15f;
    this->AngleAccelSpeed = 350.00f;
    this->BaseLength = 130.00f;
    this->MaxAngleSpeed = 360.00f;
    this->PlaySound = NULL;
    this->FinishPlayTime = 10.00f;
    this->AttachmentRecordLengthMin = 100.00f;
    this->AttachedSoundActor = NULL;
}

