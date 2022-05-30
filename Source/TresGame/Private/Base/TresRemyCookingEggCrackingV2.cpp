#include "TresRemyCookingEggCrackingV2.h"

void ATresRemyCookingEggCrackingV2::PushState(TEnumAsByte<RemyCookingGameState> State) {
}

void ATresRemyCookingEggCrackingV2::PopState() {
}

int32 ATresRemyCookingEggCrackingV2::GetMaxCrackTimes() const {
    return 0;
}

float ATresRemyCookingEggCrackingV2::GetMaterialMaxAmount() const {
    return 0.0f;
}

EggCrackingV2MainState ATresRemyCookingEggCrackingV2::GetMainCurrentState() const {
    return EggCrackingV2MainState::None;
}

float ATresRemyCookingEggCrackingV2::GetGameDuration() const {
    return 0.0f;
}

void ATresRemyCookingEggCrackingV2::ChangeState(TEnumAsByte<RemyCookingGameState> State) {
}

ATresRemyCookingEggCrackingV2::ATresRemyCookingEggCrackingV2() {
    this->AnimationTypeRef = EggCrackingV2AnimationType::TypeA;
    this->EggUpPawnRef = NULL;
    this->EggDownPawnRef = NULL;
    this->EggInnerPawnRef = NULL;
    this->EggBowlPawnRef = NULL;
    this->EggBowlStaticMeshActorRef = NULL;
    this->TooManyLensEffectRef = NULL;
    this->TooManyEggParticleAttachDataRef = NULL;
    this->TooManyForceFeedbackEffectRef = NULL;
    this->MaxCrackTimes = 2;
    this->MaterialAmountIncreaseType = EggCrackingV2MaterialAmountIncreaseType::TypeA;
    this->IsObserveTooManyEvalution = false;
    this->m_pEggUpPawn = NULL;
    this->m_pEggDownPawn = NULL;
    this->m_pEggInnerPawn = NULL;
    this->m_pEggBowlPawn = NULL;
    this->m_pEggBowlActor = NULL;
}

