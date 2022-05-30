#include "TresRemyCookingSprinklePepperV2.h"

void ATresRemyCookingSprinklePepperV2::PushState(TEnumAsByte<RemyCookingGameState> State) {
}

void ATresRemyCookingSprinklePepperV2::PopState() {
}

float ATresRemyCookingSprinklePepperV2::GetMaterialMaxAmount() const {
    return 0.0f;
}

SprinklePepperV2MainState ATresRemyCookingSprinklePepperV2::GetMainCurrentState() const {
    return SprinklePepperV2MainState::None;
}

SprinklePepperV2InputType ATresRemyCookingSprinklePepperV2::GetInputType() const {
    return SprinklePepperV2InputType::InputTypeNone;
}

SprinklePepperV2InputTimingEvalution ATresRemyCookingSprinklePepperV2::GetInputTimingEvalution() const {
    return SprinklePepperV2InputTimingEvalution::InputTimingEvalutionNone;
}

float ATresRemyCookingSprinklePepperV2::GetInputTimer() const {
    return 0.0f;
}

float ATresRemyCookingSprinklePepperV2::GetInputGraceTime() const {
    return 0.0f;
}

float ATresRemyCookingSprinklePepperV2::GetGameDuration() const {
    return 0.0f;
}

void ATresRemyCookingSprinklePepperV2::ChangeState(TEnumAsByte<RemyCookingGameState> State) {
}

ATresRemyCookingSprinklePepperV2::ATresRemyCookingSprinklePepperV2() {
    this->PepperMillPawnRef = NULL;
    this->SaucepanStaticMeshActorRef = NULL;
    this->PanStaticMeshActorRef = NULL;
    this->BowlPawnRef = NULL;
    this->PepperParticleSuccessAttachDataRef = NULL;
    this->PepperParticleGreatSuccessAttachDataRef = NULL;
    this->PepperSpawningTimeSuccessRef = 0.00f;
    this->PepperSpawningTimeGreatSuccessRef = 0.00f;
    this->VaporParticleRef = NULL;
    this->GlitterParticleRef = NULL;
    this->GlitterParticleSpawningWaitTimeRef = 0.00f;
    this->InputJudgementTypeRef = SprinklePepperV2InputJudgementType::TypeA;
    this->InitialInputTypeRef = SprinklePepperV2InputType::InputTypeNone;
    this->InputGreatSuccessParticleAttachDataRef = NULL;
    this->m_pPepperMillPawn = NULL;
    this->m_pEquipmentActor = NULL;
    this->m_pContentsActor = NULL;
}

