#include "TresAttack4_e_ex362_DarkVolley.h"

UTresAttack4_e_ex362_DarkVolley::UTresAttack4_e_ex362_DarkVolley() {
    this->m_BulletProjectile = NULL;
    this->m_BulletNumMax = 0;
    this->m_shotInterval = 0.00f;
    this->m_VariationDegree = 0.00f;
    this->PlayVoiceRate = 0;
    this->m_MoveBack = true;
    this->m_MoveBackEQSQuery = NULL;
    this->m_MoveBackSpeedMax = 2000.00f;
    this->m_MoveBackDist = 1000.00f;
    this->m_MoveBackInitRate = 0.60f;
    this->m_AfterMoveBackSpeed = 0.00f;
}

