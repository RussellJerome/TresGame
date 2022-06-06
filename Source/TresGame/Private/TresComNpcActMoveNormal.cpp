#include "TresComNpcActMoveNormal.h"

FTresComNpcActMoveNormal::FTresComNpcActMoveNormal() {
    this->m_fLimitTimer = 0.00f;
    this->m_nWalkMode = 0;
    this->m_bNextMove = false;
    this->m_bDisableAvoid = false;
    this->m_bLoopMode = false;
    this->m_fPriorty = 0.00f;
}

