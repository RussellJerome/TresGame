#include "TresInterpTrackForceFeedback.h"

UTresInterpTrackForceFeedback::UTresInterpTrackForceFeedback() {
    this->m_bAffectsLeftLarge = true;
    this->m_bAffectsLeftSmall = true;
    this->m_bAffectsRightLarge = true;
    this->m_bAffectsRightSmall = true;
    this->m_TheaterMode = ETresFadeTrack_TheaterMode_Disable;
}

