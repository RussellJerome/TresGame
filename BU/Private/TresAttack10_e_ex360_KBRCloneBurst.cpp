#include "TresAttack10_e_ex360_KBRCloneBurst.h"

UTresAttack10_e_ex360_KBRCloneBurst::UTresAttack10_e_ex360_KBRCloneBurst() {
    this->m_BulletProjectile = NULL;
    this->m_ShotPitchDegree = 0.00f;
    this->m_PitchVariationDegree = 0.00f;
    this->m_RollVariationDegree = 0.00f;
    this->m_KBBEraseSpeed = 1.00f;
    this->m_AttackCollisionIntervalTime = 0.00f;
    this->m_SlashState = NULL;
    this->m_SlashUpState = NULL;
    this->m_CutDownState = NULL;
    this->m_KBShootState = NULL;
    this->m_ModeChengeTime = 0.30f;
    this->m_ModeChengeSubSpeed = 4000.00f;
    this->m_ModeChengeSpeed = 2000.00f;
    this->m_KBCenterOffset = 30.00f;
    this->m_MoTPlayZRate = 1.20f;
    this->m_ShotToTargetDist = 500.00f;
    this->m_MoveRotRate = 0.05f;
    this->m_RotRateTimeLimit = 3.00f;
    this->m_MoveTimeLimit = 5.00f;
}

