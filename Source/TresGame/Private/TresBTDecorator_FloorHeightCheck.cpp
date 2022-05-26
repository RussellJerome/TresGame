#include "TresBTDecorator_FloorHeightCheck.h"

UTresBTDecorator_FloorHeightCheck::UTresBTDecorator_FloorHeightCheck() {
    this->Operation = EArithmeticKeyOperation::Equal;
    this->MinRange = 0.00f;
    this->TestHeight = 5000.00f;
    this->TestMode = ETresFloorTestMode::Navmesh;
    this->m_bUseOverrideKey = false;
}

