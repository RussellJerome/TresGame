#include "TresUIP_HudBmm.h"

int32 UTresUIP_HudBmm::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_HudBmm::UTresUIP_HudBmm() {
    this->m_pGFxRoot = NULL;
    this->m_pGFxBmmTarget = NULL;
    this->m_pGFxBmmTargetAnm = NULL;
}

