#include "TresGimmickSimpleMovement.h"

class AActor;

void UTresGimmickSimpleMovement::BP_StopMove() {
}

void UTresGimmickSimpleMovement::BP_StartMove() {
}

void UTresGimmickSimpleMovement::BP_SetTargetLocation(const FVector Location) {
}

void UTresGimmickSimpleMovement::BP_SetMoveType(ETresGimmickSimpleMovementMoveType Type) {
}

void UTresGimmickSimpleMovement::BP_SetMoveTargetActor(AActor* Actor) {
}

void UTresGimmickSimpleMovement::BP_SetMaxMoveVelocity(float Velocity) {
}

void UTresGimmickSimpleMovement::BP_SetEnableSweep(bool Enable) {
}

void UTresGimmickSimpleMovement::BP_SetAcceleration(float Acceleration) {
}


FVector UTresGimmickSimpleMovement::BP_GetTargetLocation() const {
    return FVector{};
}

FTransform UTresGimmickSimpleMovement::BP_GetStartTransform() const {
    return FTransform{};
}

float UTresGimmickSimpleMovement::BP_GetMaxMoveVelocity() const {
    return 0.0f;
}

float UTresGimmickSimpleMovement::BP_GetAcceleration() const {
    return 0.0f;
}

UTresGimmickSimpleMovement::UTresGimmickSimpleMovement() {
    this->m_bEnableMove = true;
    this->m_MoveType = ETresGimmickSimpleMovementMoveType::Straight;
    this->m_AcclType = ETresGimmickSimpleMovementAcclType::Linear;
    this->m_MoveTargetActor = NULL;
    this->m_InitialVelocity = 45.00f;
    this->m_Acceleration = 10.00f;
    this->m_UnitAccelerationCurve = NULL;
    this->m_MaxVelocity = 90.00f;
    this->m_MaxMoveLength = 4000.00f;
    this->m_Direction = ETresGimmickSimpleMovementDirAxis::Forward;
    this->m_bEnableSweep = true;
    this->m_HomingRotSpeed = 45.00f;
    this->m_UnitParabolaCurve = NULL;
    this->m_ParabolaHeight = 100.00f;
    this->m_UnitInterpRotationCurve = NULL;
}

