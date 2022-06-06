#include "TresAnimNotify_PlayVoice.h"

UTresAnimNotify_PlayVoice::UTresAnimNotify_PlayVoice() {
    this->m_VoiceAsset = NULL;
    this->m_VolumeMultiplier = 1.00f;
    this->m_PitchMultiplier = 1.00f;
    this->m_SocketName = TEXT("atama");
    this->m_bFollow = true;
}

