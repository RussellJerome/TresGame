#include "TresGimmickBrickStaticBase.h"
#include "TresNavModifierComponent.h"
#include "TresGimmickHitCountComponent.h"
#include "TresStaticMeshComponent.h"

class AActor;

void ATresGimmickBrickStaticBase::OnTresTakeDamageGimmickCallback(const FHitResult& HitInfo, AActor* DamageCauser) {
}

ATresGimmickBrickStaticBase::ATresGimmickBrickStaticBase() {
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresGimmickMesh0"));
    this->TresGimmickHitCount = CreateDefaultSubobject<UTresGimmickHitCountComponent>(TEXT("TresGimmickHitCount0"));
    this->TresNavModifier = CreateDefaultSubobject<UTresNavModifierComponent>(TEXT("TresNavModifier0"));
    this->m_ImpulseRadius = 250.00f;
    this->m_ImpulseStrength = 100.00f;
    this->m_DitherParamName = TEXT("Fade");
    this->m_DitherFadeInvert = false;
    this->m_DitherStartTime = 1.50f;
    this->m_DitherTime = 1.00f;
}

