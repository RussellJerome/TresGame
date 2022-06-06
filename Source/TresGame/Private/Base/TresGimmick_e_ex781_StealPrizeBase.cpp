#include "TresGimmick_e_ex781_StealPrizeBase.h"
#include "Components/SceneComponent.h"

ATresGimmick_e_ex781_StealPrizeBase::ATresGimmick_e_ex781_StealPrizeBase() {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TresRoot"));
    this->m_ParabolaHeight = 280.00f;
    this->m_SoundGet = NULL;
    this->m_AspilAmount = 0;
    this->m_pGetter = NULL;
}

