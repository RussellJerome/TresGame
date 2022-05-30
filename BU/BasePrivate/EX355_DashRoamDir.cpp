#include "EX355_DashRoamDir.h"

FEX355_DashRoamDir::FEX355_DashRoamDir() {
    this->m_DashRoamDir = EEX355_DashRoamDir_Left;
    this->m_DashAttackDir = EEX355_DashRoamDir_Left;
    this->m_DashMiddleAction = EEX355_DashMiddleAction_None;
    this->m_fDashMiddleActionTime = 0.00f;
}

