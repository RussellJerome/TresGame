#include "TresAttack14_e_ex355_ThrowBB.h"

UTresAttack14_e_ex355_ThrowBB::UTresAttack14_e_ex355_ThrowBB() {
    this->m_Projectile = NULL;
    this->m_bAimTarget = false;
    this->m_fAimTargetMaxYaw = 180.00f;
    this->m_fAimTargetMinPitch = -90.00f;
    this->m_fAimTargetMaxPitch = 90.00f;
    this->m_iValidThrowPattern = 0;
    this->m_ProjectileSub = NULL;
}

