#include "TresAnimNotifyState_PlayVoice.h"

UTresAnimNotifyState_PlayVoice::UTresAnimNotifyState_PlayVoice() {
    this->m_VoiceAsset = NULL;
    this->m_StartWaitTime = 0.00f;
    this->m_VolumeMultiplier = 1.00f;
    this->m_PitchMultiplier = 1.00f;
    this->FadeOutTime = 0.00f;
    this->m_SocketName = TEXT("atama");
    this->m_bFollow = true;
}

