#include "TresGimmick_e_ex356_Card.h"
#include "Components/SceneComponent.h"
#include "TresLockonPriorityOverlapComponent_e_ex356.h"
#include "TresReactorComponent.h"

class ATresCharPawnBase;

void ATresGimmick_e_ex356_Card::OnBigDealReactorDoCommand(ATresCharPawnBase* InCommandCauser, TEnumAsByte<ETresCommandKind> InCommandID, UTresReactorComponent* InReactorComponent) {
}

ATresGimmick_e_ex356_Card::ATresGimmick_e_ex356_Card() {
    this->MyTransformControl = CreateDefaultSubobject<USceneComponent>(TEXT("MyTransformControl"));
    this->MyLockonPriorityOverlap = CreateDefaultSubobject<UTresLockonPriorityOverlapComponent_e_ex356>(TEXT("MyLockonPriorityOverlap"));
    this->MyBigDealReactorComponent = CreateDefaultSubobject<UTresReactorComponent>(TEXT("MyBigDealReactorComponent"));
    this->m_ExplodeAttackLifeTime = 0.00f;
    this->m_SmokeParticleSystem = NULL;
    this->m_FieldOutCardSmokeParticleSystem = NULL;
    this->m_ExplodeParticleSystem = NULL;
    this->m_HideAndSeekExplodeParticleSystem = NULL;
    this->m_HideAndSeekExplodeCardParticleSystem = NULL;
    this->m_BigDealAttackCardMoveParticleSystem = NULL;
    this->m_BigDealCardAuraParticleSystem = NULL;
}

