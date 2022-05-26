#include "TresAIAnimInstance.h"

class UAnimationAsset;
class UObject;

FTransform UTresAIAnimInstance::ExtractRootMotion(UObject* WorldContextObject, UAnimationAsset* InAnimAsset, FVector inInput, FColor DebugColor) {
    return FTransform{};
}

UTresAIAnimInstance::UTresAIAnimInstance() {
    this->bUseCodeDrivenAnimation = true;
    this->LocomotionStateMachineIndex = 0;
    this->bUseOmnidirectionalMovement = false;
    this->bUseQuickStop = false;
    this->DesiredLocomotionMode = MOVE_Walking;
    this->DesiredTurnMode = ETresTurnMode::TurnInPlace;
    this->StopDistance = 0.00f;
    this->UseRadius = 0.00f;
    this->RootMotionForwardRunEnd = 0.00f;
    this->MinSpeed = 0.00f;
    this->MaxSpeed = 0.00f;
    this->bIsJumpingOrFalling = false;
    this->bIsPreciseArrival = true;
    this->bIsAbortMove = false;
    this->bIsFastAbort = false;
    this->CurrentLocomotionMode = MOVE_None;
    this->CurrentTurnMode = ETresTurnMode::TurnInPlace;
    this->DeltaFacingYaw = 0.00f;
    this->DeltaMovementYaw = 0.00f;
    this->DesiredFacingYaw = 0.00f;
    this->DesiredVelocityXY = 0.00f;
    this->DesiredVelocityZ = 0.00f;
    this->bIsIdle = false;
}

