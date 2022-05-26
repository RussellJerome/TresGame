#include "TresAttack3_e_ex363_SledgeHammer.h"

UTresAttack3_e_ex363_SledgeHammer::UTresAttack3_e_ex363_SledgeHammer() {
    this->m_GoalDistance = 50.00f;
    this->m_fMoveSpeed = 3000.00f;
    this->m_fMoveStopDegree = 1200.00f;
    this->m_fMoveStopRange = 500.00f;
    this->m_fLoopWaitTime = 0.00f;
    this->m_DirectAttack = false;
    this->m_AtkMotionSkipTime = 0.00f;
    this->PlayVoiceRate = 0;
    this->m_BulletProjectile = NULL;
    this->m_ShotInvisible = false;
}

