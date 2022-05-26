#include "TresAttack5_e_dw401_DevilMeteor.h"

UTresAttack5_e_dw401_DevilMeteor::UTresAttack5_e_dw401_DevilMeteor() {
    this->m_pDevilMeteorCyclone = NULL;
    this->m_pro_Phase1_MoveStartInterval = 0.00f;
    this->m_pro_Phase1_MeteorNum = 50;
    this->m_pro_Phase1_MeteorFireInterval = 0.30f;
    this->m_pro_Phase1_MeteorFireIntervalRand = 0.10f;
    this->m_pro_Phase1_MeteorGravityScale = 1.00f;
    this->m_pro_Phase1_MeteorFireAngle = 80.00f;
    this->m_pro_Phase1_MeteorFireExclusionAngle = 10.00f;
    this->m_pro_Phase1_MeteorFirePitchAngleMin = 70.00f;
    this->m_pro_Phase1_MeteorFirePitchAngleMax = 85.00f;
    this->m_pro_Phase1_MeteorFireDistMin = 2000.00f;
    this->m_pro_Phase1_MeteorFireDistMax = 4000.00f;
    this->m_pro_Phase1_CycloneMoveSpeed = 1000.00f;
    this->m_pro_Phase1_NextPhaseInterval = 1.00f;
    this->m_pro_Phase1_MeteorActionCnt = 1;
    this->m_pro_Phase1_NextMeteorActionInterval = 3.00f;
    this->m_pro_Phase2_MeteorNum = 50;
    this->m_pro_Phase2_MeteorFireInterval = 0.30f;
    this->m_pro_Phase2_MeteorFireIntervalRand = 0.10f;
    this->m_pro_Phase2_MeteorImpactTime = 1.00f;
    this->m_pro_Phase2_MeteorHeight = 700.00f;
    this->m_pro_Phase2_NextPhaseInterval = 1.00f;
    this->m_pro_Phase2_MeteorTgtPosRadius = 3000.00f;
    this->m_pro_Phase2_MeteorPCAppearCnt = 4;
    this->m_pro_Phase2_MeteorPCAppearCntRnd = 3;
    this->m_pro_Phase2_MeteorPCFallCnt = 4;
    this->m_pro_Phase2_MeteorPCFallCntRnd = 3;
    this->m_pro_Phase2_MeteorActionCnt = 1;
    this->m_pro_Phase2_NextMeteorActionInterval = 3.00f;
    this->m_pro_UpdraftClass = NULL;
    this->m_pro_UpdraftHeight = 3000.00f;
    this->m_pro_UpdraftForce = 2000.00f;
    this->m_pro_Phase3_NextAtkInterval = 1.00f;
    this->m_pro_Phase3_AtkCollInterval = 1.00f;
    this->m_pro_Phase3_AtkTime = 3.00f;
    this->m_pro_CoreVanishEffData = NULL;
    this->m_pro_CoreAppearBodyEffData = NULL;
    this->m_pro_CoreAppearEffData = NULL;
    this->m_pro_Phase2FirstAtkEffData = NULL;
}

