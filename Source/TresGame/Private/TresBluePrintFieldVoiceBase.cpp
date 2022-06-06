#include "TresBluePrintFieldVoiceBase.h"

class UTresFieldVoice;
class ATresAIPawnBase;

bool UTresBluePrintFieldVoiceBase::IsSameExecuter() {
    return false;
}

bool UTresBluePrintFieldVoiceBase::IsSameBruePrintClass() {
    return false;
}

bool UTresBluePrintFieldVoiceBase::IsPlayingVoice() {
    return false;
}

bool UTresBluePrintFieldVoiceBase::IsPlaying() {
    return false;
}

bool UTresBluePrintFieldVoiceBase::IsPlayAfterTime(float Time) {
    return false;
}

bool UTresBluePrintFieldVoiceBase::IsOverLastExecuteSameGroupTime(float Time) {
    return false;
}

bool UTresBluePrintFieldVoiceBase::IsInCenter(const FVector2D& posRate, const FVector2D& InRate) {
    return false;
}

bool UTresBluePrintFieldVoiceBase::IsCinematic() {
    return false;
}

UTresFieldVoice* UTresBluePrintFieldVoiceBase::GetRandomFieldVoice(TArray<UTresFieldVoice*> targetArray) {
    return NULL;
}

ATresAIPawnBase* UTresBluePrintFieldVoiceBase::GetPlayer() {
    return NULL;
}

float UTresBluePrintFieldVoiceBase::GetPlayAfterTime() {
    return 0.0f;
}

int32 UTresBluePrintFieldVoiceBase::GetExecuteNum() {
    return 0;
}

bool UTresBluePrintFieldVoiceBase::Execute_Implementation() {
    return false;
}

UTresBluePrintFieldVoiceBase::UTresBluePrintFieldVoiceBase() {
    this->m_pCommonParam = NULL;
    this->m_ExecuteMode = ETresFieldVoiceExecuteMode::Tick;
    this->m_Infinity = false;
}

