#include "TresUIP_SpecialShip.h"

int32 UTresUIP_SpecialShip::OnCallback(int32 ID, int32 Param) {
    return 0;
}

UTresUIP_SpecialShip::UTresUIP_SpecialShip() {
    this->m_DataTableNauticalChart = NULL;
    this->m_pHudParts = NULL;
    this->m_pGFxRoot = NULL;
    this->m_pGFxNauticalChart = NULL;
    this->m_pGFxPowerUpWin = NULL;
    this->m_pGFxBtnInfo = NULL;
    this->m_pGFxBtnInfoText = NULL;
    this->m_pGFxShipStatus = NULL;
    this->m_pGFxTxShipName = NULL;
    this->m_pGFxLevelMax = NULL;
    this->m_pGFxNumLv = NULL;
    this->m_pGFxGaugeNext = NULL;
    this->m_pGFxNumNext = NULL;
    this->m_pGFxNumCrab = NULL;
    this->m_pGFxNumHpMax = NULL;
    this->m_pGFxNumAttack = NULL;
    this->m_pGFxNumCannon1 = NULL;
    this->m_pGFxNumCannon2 = NULL;
    this->m_pGFxChartInfo1 = NULL;
    this->m_pGFxChartInfo2 = NULL;
    this->m_pGFxPlaceName = NULL;
    this->m_pGFxCursor = NULL;
    this->m_pGFxMarkerP = NULL;
    this->m_pGFxMarkerPIcon = NULL;
    this->m_pGFxWinNumLv = NULL;
    this->m_pGFxWinNumHpMax = NULL;
    this->m_pGFxWinNumAttack = NULL;
    this->m_pGFxWinNumCannon1 = NULL;
    this->m_pGFxWinNumCannon2 = NULL;
    this->m_pGFxCrabNextLv = NULL;
}

