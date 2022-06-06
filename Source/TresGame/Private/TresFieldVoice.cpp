#include "TresFieldVoice.h"

UTresFieldVoice::UTresFieldVoice() {
    this->m_IsFaceAnim = true;
    this->m_pSound = NULL;
    this->m_SoundDelay = 0.00f;
    this->m_DispSubtitleTime = 3.00f;
    this->m_Talker = ETresChrUniqueID::TRES_CHR_UID_UNKNOWN;
}

