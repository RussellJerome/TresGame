#include "TresAttack1_e_ex047_Fire.h"

UTresAttack1_e_ex047_Fire::UTresAttack1_e_ex047_Fire() {
    this->m_AttackProjectile = NULL;
    this->m_FireTurnParticle = NULL;
    this->m_FireTurnType = TRES_ENEMY_EX047_FIRETURN_LEFT;
    this->m_ShotPitchDegree = 0.00f;
    this->m_ShotRollDegree = 0.00f;
    this->m_PitchVariationDegree = 5.00f;
    this->m_RollVariationDegree = 5.00f;
    this->m_shotInterval = 0.10f;
    this->m_OnceTurnInitialSpeed = 1000.00f;
    this->m_OnceTurnInterval = 0.50f;
    this->m_TwiceTurnInitialSpeed = 1000.00f;
    this->m_TwiceTurnInterval = 0.50f;
    this->m_TurnCountMax = 0;
    this->m_TurnFireTargetPos = 250.00f;
    this->m_OnceTurnFireTargetOffsetZ = 0.00f;
    this->m_TwiceTurnFireTargetOffsetZ = 0.00f;
    this->m_TurnFireDOTime = 0.20f;
    this->m_TurnFireScale = 0.00f;
}

