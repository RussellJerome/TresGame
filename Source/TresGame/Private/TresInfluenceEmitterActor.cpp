#include "TresInfluenceEmitterActor.h"
#include "TresInfluenceEmitterComponent.h"

void ATresInfluenceEmitterActor::SetUnlimitedTime(bool bEnabled) {
}

void ATresInfluenceEmitterActor::SetTimeLimit(float InTime) {
}

void ATresInfluenceEmitterActor::SetShape(TEnumAsByte<ETresInfluenceEmitterShape::Type> inShape, FVector inShapeSize) {
}

void ATresInfluenceEmitterActor::SetMinInfluence(float inMinInfluence) {
}

void ATresInfluenceEmitterActor::SetMaxInfluence(float inMaxInfluence) {
}

void ATresInfluenceEmitterActor::SetLayer(TEnumAsByte<ETresInfluenceMapLayer::Type> InLayer) {
}

ATresInfluenceEmitterActor::ATresInfluenceEmitterActor() {
    this->m_InfluenceEmitterComponent = CreateDefaultSubobject<UTresInfluenceEmitterComponent>(TEXT("InfEmitterComp"));
}

