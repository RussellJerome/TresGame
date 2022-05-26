#include "TresInfluenceEmitterComponent.h"

void UTresInfluenceEmitterComponent::SetUnlimitedTime(bool bEnabled) {
}

void UTresInfluenceEmitterComponent::SetTimeLimit(float InTime) {
}

void UTresInfluenceEmitterComponent::SetShape(TEnumAsByte<ETresInfluenceEmitterShape::Type> inShape, FVector inShapeSize) {
}

void UTresInfluenceEmitterComponent::SetMinInfluence(float inMinInfluence) {
}

void UTresInfluenceEmitterComponent::SetMaxInfluence(float inMaxInfluence) {
}

void UTresInfluenceEmitterComponent::SetLayer(TEnumAsByte<ETresInfluenceMapLayer::Type> InLayer) {
}

UTresInfluenceEmitterComponent::UTresInfluenceEmitterComponent() {
    this->m_Layer = ETresInfluenceMapLayer::PlayerAndFriendNpc;
    this->m_Shape = ETresInfluenceEmitterShape::Box;
    this->m_MaxInfluence = 1.00f;
    this->m_MinInfluence = 0.00f;
    this->m_TimeLimit = 1.00f;
    this->m_bUnlimitedTime = true;
}

