#include "EX359_BeamWaitMoveInfo.h"

FEX359_BeamWaitMoveInfo::FEX359_BeamWaitMoveInfo() {
    this->m_bNotEndOnTime = false;
    this->m_fMaxWaitTime = 0.00f;
    this->m_bUpdateMoveDir = false;
}

