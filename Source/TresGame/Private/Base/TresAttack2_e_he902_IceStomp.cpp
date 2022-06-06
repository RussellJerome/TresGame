#include "TresAttack2_e_he902_IceStomp.h"

UTresAttack2_e_he902_IceStomp::UTresAttack2_e_he902_IceStomp() {
    this->m_ProjectileManager = NULL;
    this->m_Projectile = NULL;
    this->m_fTargetableCenterYaw_R = 0.00f;
    this->m_fTargetableWidthYaw_R = 0.00f;
    this->m_fAttackLinesAngleMargin_R = 0.00f;
    this->m_fTargetableCenterYaw_L = 0.00f;
    this->m_fTargetableWidthYaw_L = 0.00f;
    this->m_fAttackLinesAngleMargin_L = 0.00f;
    this->m_fAttackInterval = 0.00f;
    this->m_iMaxAttackCount = 0;
    this->m_fAttackMargin = 0.00f;
    this->m_fAttackSideDeviation = 0.00f;
    this->m_fProjectileScale_Begin = 0.00f;
    this->m_fProjectileScale_End = 0.00f;
}

