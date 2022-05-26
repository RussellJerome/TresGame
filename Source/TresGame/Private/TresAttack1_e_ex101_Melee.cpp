#include "TresAttack1_e_ex101_Melee.h"

UTresAttack1_e_ex101_Melee::UTresAttack1_e_ex101_Melee() {
    this->m_AttackBeginAnimData = NULL;
    this->m_AttackLoopAnimData = NULL;
    this->m_AttackEndAnimData = NULL;
    this->m_MoveSpeed = 1000.00f;
    this->m_MoveTurnAngleMax = 360.00f;
    this->m_MoveLimitTime = 2.00f;
    this->m_RiseMaxHeight = 300.00f;
    this->m_MaxHeightTime = 0.50f;
    this->m_DistanceToAttack = 200.00f;
    this->m_ApproachSpeed = 500.00f;
    this->m_ApproachHMin = 100.00f;
    this->m_ApproachHMax = 500.00f;
    this->m_ApproachVMin = 200.00f;
    this->m_ApproachVMax = 500.00f;
    this->m_AttackSpeed = 2000.00f;
}

