#include "TresRemyTaskBase.h"

class UTresRemyMouseParameter;

bool UTresRemyTaskBase::IsInputMouseDir(FVector2D Dir, float degAngle) {
    return false;
}

UTresRemyMouseParameter* UTresRemyTaskBase::GetParameter() {
    return NULL;
}

float UTresRemyTaskBase::GetMouseRotationDir_Implementation() {
    return 0.0f;
}

float UTresRemyTaskBase::GetMousePower_Implementation() {
    return 0.0f;
}

FVector2D UTresRemyTaskBase::GetMousePosition() {
    return FVector2D{};
}

FVector UTresRemyTaskBase::GetMouseMoveDir3D_Implementation() {
    return FVector{};
}

FVector2D UTresRemyTaskBase::GetMouseMoveDir_Implementation() {
    return FVector2D{};
}

FVector2D UTresRemyTaskBase::GetMouseMoveDelta_Implementation() {
    return FVector2D{};
}





UTresRemyTaskBase::UTresRemyTaskBase() {
    this->MouseParameter = NULL;
    this->MousePowerMulRate = 1.00f;
    this->MousePowerChangeLimit = 30.00f;
}

