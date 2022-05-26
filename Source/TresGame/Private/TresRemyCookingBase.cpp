#include "TresRemyCookingBase.h"

void ATresRemyCookingBase::TT_PrintStringVector(const FString& Name, const FVector& Value) {
}

void ATresRemyCookingBase::TT_PrintStringInt(const FString& Name, int32 Value) {
}

void ATresRemyCookingBase::TT_PrintStringFloat(const FString& Name, float Value) {
}

void ATresRemyCookingBase::PushState(TEnumAsByte<RemyCookingGameState> State) {
}

void ATresRemyCookingBase::PopState() {
}

RemyStickControlType ATresRemyCookingBase::GetStickControlType() {
    return RemyStickControlType::SoraViewpoint;
}

float ATresRemyCookingBase::GetRemainingTime() const {
    return 0.0f;
}

float ATresRemyCookingBase::GetMouseY() {
    return 0.0f;
}

float ATresRemyCookingBase::GetMouseX() {
    return 0.0f;
}

float ATresRemyCookingBase::GetMaterialPercent() const {
    return 0.0f;
}

float ATresRemyCookingBase::GetMaterialMaxAmount() const {
    return 0.0f;
}

float ATresRemyCookingBase::GetMaterialAmount() const {
    return 0.0f;
}

float ATresRemyCookingBase::GetGameDuration() const {
    return 0.0f;
}

RemyCookingEvaluationResult ATresRemyCookingBase::GetEvaluationResult() const {
    return RemyCookingEvaluationResult::RemyCookingResultNothing;
}

TEnumAsByte<RemyCookingEvalution> ATresRemyCookingBase::GetEvaluation() const {
    return RemyCookingEvalutionNothing;
}

TEnumAsByte<RemyCookingGameState> ATresRemyCookingBase::GetCurrentState() const {
    return RemyCookingPrepare;
}

void ATresRemyCookingBase::ChangeState(TEnumAsByte<RemyCookingGameState> State) {
}


ATresRemyCookingBase::ATresRemyCookingBase() {
    this->FPSModeRef = RemyFPSMode::FPS_Config;
    this->StickControlTypeRef = RemyStickControlType::SoraViewpoint;
    this->InputSuccessParticleRef = NULL;
    this->GasStoveFireEffectRef = NULL;
    this->GreatSuccessLensEffectRef = NULL;
    this->GreatSuccessBGEffectRef = NULL;
    this->GreatSuccessBGFrontEffectAlphaRef = 0.00f;
    this->SuccessForceFeedbackEffectRef = NULL;
    this->GreatSuccessForceFeedbackEffectRef = NULL;
    this->ShowFinishOperationUITiming = RemyShowFinishOperationUITiming::None;
    this->TaskClass = NULL;
    this->m_pTaskByPC = NULL;
    this->m_pHourglassPawn = NULL;
}

