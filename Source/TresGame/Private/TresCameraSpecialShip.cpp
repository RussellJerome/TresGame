#include "TresCameraSpecialShip.h"

void ATresCameraSpecialShip::BP_SetCameraSpecialShipRotation(FRotator Rot, bool bWorld) {
}

ATresCameraSpecialShip::ATresCameraSpecialShip() {
    this->m_PluralTargetDistance[0] = 1200.00f;
    this->m_PluralTargetDistance[1] = 1200.00f;
    this->m_PluralTargetDistance[2] = 1200.00f;
    this->m_PluralTargetDistance[3] = 1200.00f;
    this->m_PluralTargetDistanceFront[0] = 1200.00f;
    this->m_PluralTargetDistanceFront[1] = 1200.00f;
    this->m_PluralGuardDistance[0] = 2000.00f;
    this->m_PluralGuardDistance[1] = 2000.00f;
    this->m_PluralGuardDistance[2] = 2000.00f;
    this->m_PluralGuardDistance[3] = 2000.00f;
    this->m_PluralGuardPitchOffset[0] = 0.00f;
    this->m_PluralGuardPitchOffset[1] = 0.00f;
    this->m_PluralGuardPitchOffset[2] = 0.00f;
    this->m_PluralGuardPitchOffset[3] = 0.00f;
    this->m_GuardDistanceInTime = 0.50f;
    this->m_GuardDistanceOutTime = 1.00f;
    this->m_PluralRushDistance[0] = 2000.00f;
    this->m_PluralRushDistance[1] = 2000.00f;
    this->m_PluralRushDistance[2] = 2000.00f;
    this->m_PluralRushDistance[3] = 2000.00f;
    this->m_RushDistanceInTime = 0.50f;
    this->m_RushDistanceOutTime = 1.00f;
    this->m_RushPitch = 5.00f;
    this->m_LimitPitchMin = -70.00f;
    this->m_LimitPitchMax = 70.00f;
    this->m_bShipAttach = false;
}

