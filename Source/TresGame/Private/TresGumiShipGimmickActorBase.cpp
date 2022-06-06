#include "TresGumiShipGimmickActorBase.h"
#include "TresEffectAttachComponent.h"

void ATresGumiShipGimmickActorBase::FadeOutEffect(float InFadeOutTime, int32 InGroupID) {
}

void ATresGumiShipGimmickActorBase::EndEffect(int32 InGroupID) {
}

void ATresGumiShipGimmickActorBase::DestroyEffects(int32 InGroupID) {
}

ATresGumiShipGimmickActorBase::ATresGumiShipGimmickActorBase() {
    this->m_pEffectAttach = CreateDefaultSubobject<UTresEffectAttachComponent>(TEXT("EffectAttach"));
    this->m_eGimmickID = ETresGumiShipGimmickID::G_GM_NONE;
}

