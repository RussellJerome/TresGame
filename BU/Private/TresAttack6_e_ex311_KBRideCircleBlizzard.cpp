#include "TresAttack6_e_ex311_KBRideCircleBlizzard.h"

UTresAttack6_e_ex311_KBRideCircleBlizzard::UTresAttack6_e_ex311_KBRideCircleBlizzard() {
    this->m_BulletProjectile = NULL;
    this->m_TrailParticleData = NULL;
    this->m_KBMoveSpeed = 0.00f;
    this->m_BulletNumMax = 0;
    this->m_shotInterval = 0.00f;
    this->m_RotationSpeed = 0.00f;
    this->m_IsReverseRotation = false;
    this->m_IsNotTurn = false;
    this->m_IsTargetRotation = false;
    this->m_TargetRange = 1000.00f;
    this->m_TargetToRot = 60.00f;
}

