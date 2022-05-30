#include "TresAttack19_e_ex781_WarpSlash.h"

UTresAttack19_e_ex781_WarpSlash::UTresAttack19_e_ex781_WarpSlash() {
    this->m_WarpGroundOffsetZ = 50.00f;
    this->m_WarpAirOffsetZ = -50.00f;
    this->m_WarpOffsetGroundHight = 150.00f;
    this->m_InitMoveSpeed = 0.00f;
    this->m_AddMoveSpeed = 5000.00f;
    this->m_MoveSpeedMax = 3000.00f;
    this->m_AttackHitMoveSpeed = 1500.00f;
    this->m_MoveTime = 2.00f;
    this->m_AttackHitAfterMoveTime = 0.30f;
    this->m_ChaseDist = 150.00f;
    this->m_ChaseMoveEndWaitTIme = 0.30f;
    this->m_DashSlashOnly = false;
    this->m_LoopMotionStart = false;
    this->m_LoopMotionEnd = false;
    this->m_DontDashSlash = false;
    this->m_WarpEnd = true;
    this->m_InvisibleLockOnMarker = true;
    this->m_BindFailedDestroyBit = false;
    this->m_turnRate = 0.30f;
    this->m_StartMotionWaitTime = 0.00f;
    this->m_UseMotion = false;
    this->m_SkipMotTime = 0.00f;
    this->m_PlayRate = 0.00f;
    this->m_ChaseRot = 100.00f;
}

