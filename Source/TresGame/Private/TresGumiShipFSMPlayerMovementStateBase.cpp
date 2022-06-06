#include "TresGumiShipFSMPlayerMovementStateBase.h"

FRotator UTresGumiShipFSMPlayerMovementStateBase::_GetPlayerRotation() const {
    return FRotator{};
}

FRotator UTresGumiShipFSMPlayerMovementStateBase::_GetPlayerRelativeRotation() const {
    return FRotator{};
}

FVector UTresGumiShipFSMPlayerMovementStateBase::_GetPlayerRelativeLocation() const {
    return FVector{};
}

FVector UTresGumiShipFSMPlayerMovementStateBase::_GetPlayerLocation() const {
    return FVector{};
}

void UTresGumiShipFSMPlayerMovementStateBase::_EnableRotateModel(bool bIn) {
}

void UTresGumiShipFSMPlayerMovementStateBase::_AddWorldDeltaMovementInput(const FVector& vWorldMovement) {
}

void UTresGumiShipFSMPlayerMovementStateBase::_AddLocalDeltaMovementInput(const FVector& vLocalMovement) {
}

UTresGumiShipFSMPlayerMovementStateBase::UTresGumiShipFSMPlayerMovementStateBase() {
}

