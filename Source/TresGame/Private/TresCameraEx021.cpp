#include "TresCameraEx021.h"

ATresCameraEx021::ATresCameraEx021() {
    this->m_AccDistance = 1500.00f;
    this->m_AccDistanceTime = 0.50f;
    this->m_AccEndDistanceTime = 1.00f;
    this->m_NormalDistance[0] = 700.00f;
    this->m_NormalDistance[1] = 700.00f;
    this->m_NormalDistance[2] = 700.00f;
    this->m_NormalDistance[3] = 700.00f;
    this->m_NormalDistanceTime = 1.00f;
    this->m_BaseTarget = NULL;
}

