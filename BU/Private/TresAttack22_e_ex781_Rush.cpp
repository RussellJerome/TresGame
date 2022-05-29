#include "TresAttack22_e_ex781_Rush.h"

UTresAttack22_e_ex781_Rush::UTresAttack22_e_ex781_Rush() {
    this->m_InitMoveSpeed = 500.00f;
    this->m_AddMoveSpeed = 3000.00f;
    this->m_MoveSpeedMax = 3000.00f;
    this->m_MoveTime = 2.00f;
    this->m_SlowDownDist = 800.00f;
    this->m_AvatarForwardDist = 100.00f;
    this->m_AvatarDist = 200.00f;
    this->m_ChaseMoveEndWaitTIme = 0.20f;
    this->m_LoopMotionStart = false;
    this->m_AtackMode = false;
    this->m_AttackUpDataTime = 0.00f;
    this->m_bEnableHoming = true;
    this->m_HomingStartDelay = 0.00f;
    this->m_ChaseDist = 200.00f;
    this->m_HomingMaxAngle = 0.00f;
    this->m_HomingTurnMax = 0.00f;
    this->m_HomingTurnAccel = 0.00f;
    this->m_HomingMaxTurnMax = 0.00f;
    this->m_AvatarAction = NULL;
    this->m_EffectId = 1;
}

