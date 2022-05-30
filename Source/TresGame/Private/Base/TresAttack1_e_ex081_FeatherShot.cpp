#include "TresAttack1_e_ex081_FeatherShot.h"

UTresAttack1_e_ex081_FeatherShot::UTresAttack1_e_ex081_FeatherShot() {
    this->m_FeatherProjectileAsset = NULL;
    this->m_RotateYaw = 60.00f;
    this->m_AttackStartTurnSpeed = 300.00f;
    this->m_FeatherShotSpeed = 2000.00f;
    this->m_HomingSpeedXY = 120.00f;
    this->m_HomingSpeedZ = 120.00f;
    this->m_HomigMinDist = 360.00f;
    this->m_HomingMaxAngle = 60.00f;
    this->m_FeatherShotMaxPitchRate = 0.50f;
    this->m_FeatherShotMaxPitch = 30.00f;
    this->m_FeatherShotMaxInversePitch = 20.00f;
    this->m_AttackTurnSpeedXY = 100.00f;
}

