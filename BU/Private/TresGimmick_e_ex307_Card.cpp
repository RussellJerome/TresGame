#include "TresGimmick_e_ex307_Card.h"
#include "Components/SceneComponent.h"
#include "TresSkeletalMeshComponent.h"

ATresGimmick_e_ex307_Card::ATresGimmick_e_ex307_Card() {
    this->MyTransformControl = CreateDefaultSubobject<USceneComponent>(TEXT("MyTransformControl"));
    this->MyMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("MyMesh"));
    this->m_DummySpawnProjectileClass = NULL;
    this->m_SmokeParticleSystem = NULL;
    this->m_HintParticleSystem = NULL;
    this->m_HintEffectOffsetDistance = 0.00f;
}

