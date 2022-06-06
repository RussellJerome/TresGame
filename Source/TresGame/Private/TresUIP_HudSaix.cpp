#include "TresUIP_HudSaix.h"

int32 UTresUIP_HudSaix::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_HudSaix::UTresUIP_HudSaix() {
    this->m_pHudParts = NULL;
    this->m_pGFxBerserkGauge[0] = NULL;
    this->m_pGFxBerserkGauge[1] = NULL;
    this->m_pGFxBerserkGauge[2] = NULL;
    this->m_pGFxBerserkGauge[3] = NULL;
    this->m_pGFxGaugeAnm[0] = NULL;
    this->m_pGFxGaugeAnm[1] = NULL;
    this->m_pGFxGaugeAnm[2] = NULL;
    this->m_pGFxGaugeAnm[3] = NULL;
    this->m_pGFxGauge[0] = NULL;
    this->m_pGFxGauge[1] = NULL;
    this->m_pGFxGauge[2] = NULL;
    this->m_pGFxGauge[3] = NULL;
    this->m_pGFxGaugeGradation[0] = NULL;
    this->m_pGFxGaugeGradation[1] = NULL;
    this->m_pGFxGaugeGradation[2] = NULL;
    this->m_pGFxGaugeGradation[3] = NULL;
    this->m_pGFxGaugeFlashAnm[0] = NULL;
    this->m_pGFxGaugeFlashAnm[1] = NULL;
    this->m_pGFxGaugeFlashAnm[2] = NULL;
    this->m_pGFxGaugeFlashAnm[3] = NULL;
    this->m_pGFxIcon = NULL;
    this->m_pGFxGaugePlate = NULL;
}

