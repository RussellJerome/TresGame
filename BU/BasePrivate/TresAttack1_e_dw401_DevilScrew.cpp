#include "TresAttack1_e_dw401_DevilScrew.h"

UTresAttack1_e_dw401_DevilScrew::UTresAttack1_e_dw401_DevilScrew() {
    this->m_CoreRotEff = NULL;
    this->m_TornadoEff = NULL;
    this->m_RightCloudDustEff = NULL;
    this->m_LeftCloudDustEff = NULL;
    this->m_pro_CoreRotEffData = NULL;
    this->m_pro_TornadoEffData = NULL;
    this->m_pro_RightCloudDustEffData = NULL;
    this->m_pro_LeftCloudDustEffData = NULL;
    this->m_pro_MoveSpeed = 3000.00f;
    this->m_pro_RushTurnAddSpeed = 720.00f;
    this->m_pro_RushTurnMaxSpeed = 360.00f;
    this->m_pro_bInBattleArea = false;
}

