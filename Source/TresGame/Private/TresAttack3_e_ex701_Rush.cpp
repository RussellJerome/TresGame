#include "TresAttack3_e_ex701_Rush.h"

UTresAttack3_e_ex701_Rush::UTresAttack3_e_ex701_Rush() {
    this->m_StartAnimData = NULL;
    this->m_LoopAnimData = NULL;
    this->m_TurnAnimData = NULL;
    this->m_EndAnimData = NULL;
    this->m_ProjectileClass = NULL;
    this->m_Speed = 0.00f;
    this->m_BoneTurnSpeed = 0.00f;
    this->m_BoneMaxAngle = 0.00f;
    this->m_PitchMinAngle = 0.00f;
    this->m_AttackHtiTargetHeightOffset = 0.00f;
    this->m_ActionEndWallHitAngle = 0.00f;
    this->m_bIsEndAttackHit = false;
    this->m_OvertakeDistance = 0.00f;
    this->m_EndOvertakeDistance = 0.00f;
    this->m_ProjectileMaxDistance = 0.00f;
}

