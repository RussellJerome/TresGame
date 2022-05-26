#include "TresAttack2_e_ex106_WeaponExpansionShot.h"

UTresAttack2_e_ex106_WeaponExpansionShot::UTresAttack2_e_ex106_WeaponExpansionShot() {
    this->m_FirstProjectileSpeed = 1000.00f;
    this->m_SecondProjectileSpeed = 1000.00f;
    this->m_FirstProjectileHomingXY = 300.00f;
    this->m_FirstProjectileHomingZ = 300.00f;
    this->m_SecondProjectileHomingXY = 300.00f;
    this->m_SecondProjectileHomingZ = 300.00f;
    this->m_SecondProjectileMinDist = 300.00f;
    this->m_ShotTimer = 1.00f;
    this->m_ChildProjectileTimer = 0.30f;
    this->m_StopDistance = 300.00f;
    this->m_LazerPointerScale = 1.00f;
    this->m_YawRate = 0.50f;
    this->m_PitchRate = 0.50f;
    this->m_Inertia = 0.50f;
}

