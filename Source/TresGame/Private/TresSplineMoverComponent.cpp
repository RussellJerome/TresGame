#include "TresSplineMoverComponent.h"

class USplineComponent;
class ASQEX_SplineActor;

void UTresSplineMoverComponent::SetSplineComponent(USplineComponent* SplineComponent) {
}

void UTresSplineMoverComponent::SetSplineActor(ASQEX_SplineActor* Actor, bool nearest) {
}

void UTresSplineMoverComponent::SetSpeed(float Speed) {
}

void UTresSplineMoverComponent::SetReverse(bool Reverse) {
}

void UTresSplineMoverComponent::SetPosRate(float Rate) {
}

void UTresSplineMoverComponent::SetPos(float pos) {
}

void UTresSplineMoverComponent::SetLoop(bool Loop) {
}

FVector UTresSplineMoverComponent::GetSplineActorTerminationPos(bool IsReverse) {
    return FVector{};
}

ASQEX_SplineActor* UTresSplineMoverComponent::GetSplineActorLast() {
    return NULL;
}

ASQEX_SplineActor* UTresSplineMoverComponent::GetSplineActorFirst() {
    return NULL;
}

float UTresSplineMoverComponent::GetSpeed() {
    return 0.0f;
}

FRotator UTresSplineMoverComponent::GetRotator() const {
    return FRotator{};
}

FVector UTresSplineMoverComponent::GetLocation() const {
    return FVector{};
}

UTresSplineMoverComponent::UTresSplineMoverComponent() {
    this->MoveType = ETresSplineMoverMove::LocationAndRotation;
    this->interpSpeed = 10.00f;
    this->Param1 = 200.00f;
}

