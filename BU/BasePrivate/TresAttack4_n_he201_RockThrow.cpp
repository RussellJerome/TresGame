#include "TresAttack4_n_he201_RockThrow.h"

UTresAttack4_n_he201_RockThrow::UTresAttack4_n_he201_RockThrow() {
    this->m_fThrowRotSpeed = -5.00f;
    this->m_fThrowPitchMax = 70.00f;
    this->m_fThrowPitchMin = -70.00f;
    this->m_fMoveSpeedUp = 3000.00f;
    this->m_fMoveSpeedMiddle = 3000.00f;
    this->m_fMoveSpeedDown = 3000.00f;
    this->m_fGravityUp = 1.00f;
    this->m_fGravityMiddle = 1.00f;
    this->m_fGravityDown = 2.70f;
    this->m_fMoveSpeedUpBoss = 3000.00f;
    this->m_fMoveSpeedMiddleBoss = 3000.00f;
    this->m_fMoveSpeedDownBoss = 3000.00f;
    this->m_fGravityUpBoss = 1.00f;
    this->m_fGravityMiddleBoss = 1.00f;
    this->m_fGravityDownBoss = 2.70f;
    this->m_HitEffData = NULL;
    this->m_pProjRock = NULL;
}

