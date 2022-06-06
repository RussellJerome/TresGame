#include "TresGimmickBlastFan.h"

void ATresGimmickBlastFan::UpdateFanMode_Implementation(int32 FanMode) {
}

void ATresGimmickBlastFan::SetFanActive(bool ActiveFan) {
}

void ATresGimmickBlastFan::NextFanMode(float WaitTime) {
}

void ATresGimmickBlastFan::ChangeRotation_Implementation(float SpeedRate) {
}

ATresGimmickBlastFan::ATresGimmickBlastFan() {
    this->RotCurve = NULL;
    this->ActiveRotationSpeed = 1080.00f;
    this->EnableFanCollision = false;
    this->PlaySound = NULL;
    this->FanModeMax = 0;
}

