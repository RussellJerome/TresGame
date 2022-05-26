#include "TresUIP_HudSRide.h"

int32 UTresUIP_HudSRide::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_HudSRide::UTresUIP_HudSRide() {
    this->m_pHudParts = NULL;
    this->m_pGFxRoot = NULL;
    this->m_pGFxSRideHud = NULL;
    this->m_pGFxGoggle = NULL;
    this->m_pGFxNewRecord = NULL;
    this->m_pGFxGlowLine = NULL;
    this->m_pGFxBoostBar = NULL;
    this->m_pGFxTargetSet = NULL;
    this->m_pGFxHighScore = NULL;
}

