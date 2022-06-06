#include "TresGumiShipPawnBase.h"
#include "TresRootComponent.h"

void ATresGumiShipPawnBase::SetRootCollisionEnable(const bool bIn) {
}

FRotator ATresGumiShipPawnBase::GetRotationAmout() const {
    return FRotator{};
}

FRotator ATresGumiShipPawnBase::GetRelativeRotation() const {
    return FRotator{};
}

FVector ATresGumiShipPawnBase::GetRelativeLocation() const {
    return FVector{};
}

FRotator ATresGumiShipPawnBase::GetOldRotation() const {
    return FRotator{};
}

FVector ATresGumiShipPawnBase::GetOldLocation() const {
    return FVector{};
}

FVector ATresGumiShipPawnBase::GetMovementAmout() const {
    return FVector{};
}

ATresGumiShipPawnBase::ATresGumiShipPawnBase() {
    this->m_pRootComponent = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
}

