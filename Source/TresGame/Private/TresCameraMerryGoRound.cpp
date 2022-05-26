#include "TresCameraMerryGoRound.h"

void ATresCameraMerryGoRound::BP_SetRotationYaw(float Yaw) {
}

ATresCameraMerryGoRound::ATresCameraMerryGoRound() {
    this->m_RotYaw = 30.00f;
    this->m_RotAmplitude = 50.00f;
    this->m_RotFrequency = 0.50f;
    this->m_bWavePitch = false;
    this->m_RotWaitTime = 2.00f;
    this->m_RotReturnTime = 2.00f;
}

