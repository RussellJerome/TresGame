#include "TresGimmickRailSlideExStartActor.h"
#include "Components/SceneComponent.h"
#include "TresReactorComponent.h"

void ATresGimmickRailSlideExStartActor::OnChangeRailSlideExStartActorDispType(ETresSavePointDispType InDispType) {
}

ATresGimmickRailSlideExStartActor::ATresGimmickRailSlideExStartActor() {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Scene0"));
    this->MyReactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("TresReactor0"));
    this->m_EffectBodyComp = NULL;
    this->m_Effect_Body = NULL;
}

