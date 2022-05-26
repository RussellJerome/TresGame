#include "TresEffectTriggerTrackKey.h"

FTresEffectTriggerTrackKey::FTresEffectTriggerTrackKey() {
    this->m_Time = 0.00f;
    this->m_TriggerType = ETresEffectTriggerTrack_TriggerType_OnActive;
    this->m_FadeTime = 0.00f;
    this->bChangeColor = false;
    this->ParticleAlpha = 0.00f;
}

