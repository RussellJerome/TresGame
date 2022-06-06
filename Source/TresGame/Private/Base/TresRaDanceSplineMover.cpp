#include "TresRaDanceSplineMover.h"

FTresRaDanceSplineMover::FTresRaDanceSplineMover() {
    this->m_bSelect = false;
    this->m_bMoveing = false;
    this->m_fNowLength = 0.00f;
    this->m_fSpeed = 0.00f;
    this->m_fLineSpeed = 0.00f;
    this->m_fCurrentDistance = 0.00f;
    this->m_bIsReverse = false;
}

