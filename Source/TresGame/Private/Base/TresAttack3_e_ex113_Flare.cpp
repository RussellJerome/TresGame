#include "TresAttack3_e_ex113_Flare.h"

UTresAttack3_e_ex113_Flare::UTresAttack3_e_ex113_Flare() {
    this->m_StartAnimData = NULL;
    this->m_LoopAnimData = NULL;
    this->m_EndAnimData = NULL;
    this->m_AttackTime = 1.60f;
    this->m_ShotStartTime = 0.50f;
    this->m_ShotEndTime = 1.10f;
    this->m_NumShot = 40;
    this->m_HeightOffset = 350.00f;
    this->m_HomingDisableHitNum = 0;
    this->m_Projectile = NULL;
    this->m_EffectDataAsset = NULL;
}

