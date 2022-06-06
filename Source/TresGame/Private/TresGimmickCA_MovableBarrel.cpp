#include "TresGimmickCA_MovableBarrel.h"

bool ATresGimmickCA_MovableBarrel::UseNaviMeshCheck() const {
    return false;
}

void ATresGimmickCA_MovableBarrel::SetUseNaviMeshCheck(bool Value) {
}

void ATresGimmickCA_MovableBarrel::SetStopMovement(bool Value) {
}

void ATresGimmickCA_MovableBarrel::SetRunAwayFromPlayerMode(bool Value) {
}

void ATresGimmickCA_MovableBarrel::SetDirectionChangeInterval(float Value) {
}

bool ATresGimmickCA_MovableBarrel::RequestStartMove() {
    return false;
}


bool ATresGimmickCA_MovableBarrel::IsStopMovement() const {
    return false;
}

bool ATresGimmickCA_MovableBarrel::IsRunAwayFromPlayerMode() const {
    return false;
}

float ATresGimmickCA_MovableBarrel::GetDirectionChangeInterval() const {
    return 0.0f;
}

ATresGimmickCA_MovableBarrel::ATresGimmickCA_MovableBarrel() {
    this->m_DestroyEffectAsset = NULL;
    this->m_PushPower = ETresBodyPushPowerLevel::PPL_50;
}

