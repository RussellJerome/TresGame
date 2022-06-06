#include "TresGumiShipRailSlideArrangement.h"

void ATresGumiShipRailSlideArrangement::BP_SwitchRailSwitchState(FName RailSwitchName) {
}

void ATresGumiShipRailSlideArrangement::BP_ResetRailSwitchStateAll() {
}

ATresGumiShipRailSlideArrangement::ATresGumiShipRailSlideArrangement() {
    this->m_bRailSlideEnable = true;
    this->m_eOverrideRailType = FTresGumiShipRailSlideRailType::RSR_BOSS_TRACKING_TYPE;
    this->m_eOverrideRailDir = ESQEX_RAIL_SLIDE_DIR::SQEX_RS_DIR_BOTH;
    this->m_bIgnoreParentRotation = false;
}

