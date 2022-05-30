#include "TresAttack6_e_ex035_NutsThrow_Wall.h"

UTresAttack6_e_ex035_NutsThrow_Wall::UTresAttack6_e_ex035_NutsThrow_Wall() {
    this->m_pNuts = NULL;
    this->m_ProjectileClass = NULL;
    this->m_fMinInitVel = 200.00f;
    this->m_fMaxInitVel = 2000.00f;
    this->m_fMinPitch = -90.00f;
    this->m_fMaxPitch = 90.00f;
    this->m_fMinYaw = -90.00f;
    this->m_fMaxYaw = 90.00f;
    this->m_fRightSocketName = TEXT("vfx_mzl_0");
}

