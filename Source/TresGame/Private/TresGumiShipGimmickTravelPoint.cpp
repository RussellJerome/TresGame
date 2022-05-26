#include "TresGumiShipGimmickTravelPoint.h"

void ATresGumiShipGimmickTravelPoint::_SetMeshLoopCall(float LoopTime) {
}

ATresGumiShipGimmickTravelPoint::ATresGumiShipGimmickTravelPoint() {
    this->m_fPlayerDistance = 10000.00f;
    this->m_ActiveCheck = false;
    this->m_GlowSpeed = 15.00f;
    this->m_WorldMapID = ETresGumiShipTravelPointID::E_GM01_TP_01;
}

