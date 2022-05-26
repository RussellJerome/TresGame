#include "TresUIP_HudPlane.h"

int32 UTresUIP_HudPlane::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_HudPlane::UTresUIP_HudPlane() {
    this->m_pGFxRoot = NULL;
    this->m_pGFxTargetMarkerMove = NULL;
    this->m_pGFxTargetMarker = NULL;
    this->m_pGFxLockonMarkerMove = NULL;
    this->m_pGFxEnemyLocMarkerMove = NULL;
    this->m_pGFxEnemyLocMarker = NULL;
    this->m_pGFxArrow = NULL;
}

