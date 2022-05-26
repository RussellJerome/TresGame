#include "TresAttack3_e_ex362_PowerAlcanam.h"

UTresAttack3_e_ex362_PowerAlcanam::UTresAttack3_e_ex362_PowerAlcanam() {
    this->m_Type = TRES_ENEMY_EX362_ATTACK_ALL;
    this->m_IsMaxPower = false;
    this->m_StartMotPlaySkipTime = 0.30f;
    this->m_StartMotPlayRate = 1.00f;
    this->m_WarpEQSQuery = NULL;
    this->m_AttackNotMoveDist = 0.00f;
    this->m_AttackMoveScaleMin = 0.00f;
    this->m_AttackMoveScale = 1.50f;
    this->m_Attack7MoveScale = 2.00f;
    this->m_AttackMoveDist = 0.00f;
    this->m_Attack2MoveDist = 0.00f;
    this->m_Attack3MoveDist = 0.00f;
    this->m_Attack7MoveDist = 100.00f;
    this->m_Attack1MoveZScale = 2.00f;
    this->m_Attack3MoveZScale = 2.00f;
    this->m_Attack8MoveZScale = 3.00f;
    this->m_AttackMoveZScale = 2.00f;
    this->m_GroundCheckHigh = 10.00f;
    this->m_WarpOffsetHigh = 50.00f;
    this->m_ChaseRate = 0.30f;
    this->m_ChaseDist = 200.00f;
    this->m_WarpWaitTime = 0.00f;
    this->m_CutDownSpeed = 3000.00f;
    this->m_CutDownLoopMotHight = 200.00f;
    this->m_BulletProjectile = NULL;
    this->m_DonotWarpAttack = false;
    this->m_LandTimeUpTime = 4.00f;
}

