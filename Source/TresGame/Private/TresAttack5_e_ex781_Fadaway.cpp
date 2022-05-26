#include "TresAttack5_e_ex781_Fadaway.h"

UTresAttack5_e_ex781_Fadaway::UTresAttack5_e_ex781_Fadaway() {
    this->m_Sword = NULL;
    this->m_SwordOffsetHight = -30.00f;
    this->m_SwordMoveGoalDist = 100.00f;
    this->m_SwordAtk2MoveGoalDist = 0.00f;
    this->m_SwordAtk3MoveGoalDist = 0.00f;
    this->m_PopParticleData = NULL;
    this->m_InvisibleParticleData = NULL;
    this->m_SwordMotionStartTime = 0.00f;
    this->m_WarpDist = 0.00f;
    this->m_WarpEQSQuery = NULL;
    this->m_EndWaitTime = 0.00f;
    this->m_EndWarp = false;
    this->m_ThrowSword = NULL;
}

