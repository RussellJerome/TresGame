#include "TresFirstMapJumpData.h"

FTresFirstMapJumpData::FTresFirstMapJumpData() {
    this->m_nWmSymbleID = ETresGumiShipWorldSymbolID::E_GM01_WS_HE;
    this->m_isWorldStart = false;
    this->m_nWmStart = ETresGumiShipWorldSymbolID::E_GM01_WS_HE;
    this->m_isTpStart = false;
    this->m_nTpStart = ETresGumiShipTravelPointID::E_GM01_TP_01;
}

