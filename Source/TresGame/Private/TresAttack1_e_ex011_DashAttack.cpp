#include "TresAttack1_e_ex011_DashAttack.h"

UTresAttack1_e_ex011_DashAttack::UTresAttack1_e_ex011_DashAttack() {
    this->m_ChildrenStartAnimData = NULL;
    this->m_ChildrenLoopAnimData = NULL;
    this->m_ChildrenEndAnimData = NULL;
    this->m_StartAnimData = NULL;
    this->m_LoopAnimData = NULL;
    this->m_EndAnimData = NULL;
    this->m_MaxMoveSpeed = 2000.00f;
    this->m_DashLimit = ETresDashLimit_e_ex011::Distance;
    this->m_DashAmount = 1000.00f;
    this->m_WeakTurnAngle = 150.00f;
    this->m_TurnAngle = 360.00f;
    this->m_TurnLimitAngle = 180.00f;
    this->m_TargetSelectEnvQuery = NULL;
    this->m_EnvQueryRunMode = EEnvQueryRunMode::SingleResult;
    this->m_RotationAdjustPower = 0.10f;
}

