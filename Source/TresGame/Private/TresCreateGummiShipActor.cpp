#include "TresCreateGummiShipActor.h"
#include "Components/SceneComponent.h"

void ATresCreateGummiShipActor::ChangeState(TEnumAsByte<CreateGummiShipState> State) {
}

ATresCreateGummiShipActor::ATresCreateGummiShipActor() {
    this->m_pUseCollisionGummiComponent = NULL;
    this->m_pRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("GummiShipRootComponent"));
    this->m_pGummiEditorDataTableSet = NULL;
    this->m_pTest = NULL;
    this->m_pArrowComponent = NULL;
}

