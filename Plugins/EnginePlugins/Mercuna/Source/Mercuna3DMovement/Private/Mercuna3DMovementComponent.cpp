#include "Mercuna3DMovementComponent.h"

FVector UMercuna3DMovementComponent::GetLocalVelocity() const {
    return FVector{};
}

UMercuna3DMovementComponent::UMercuna3DMovementComponent() {
    this->bPositionCorrected = false;
}

