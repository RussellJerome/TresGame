#include "TresProjectile_e_ex352_LightBulb.h"

ATresProjectile_e_ex352_LightBulb::ATresProjectile_e_ex352_LightBulb() {
    this->m_CanterDistance = 30.00f;
    this->m_DarkLaserCoveringEffectData = NULL;
    this->m_LightBulbKind = ETres_e_ex352_LightBulbKind::LightBulbKind_Homing;
    this->m_RotSpeed = 30.00f;
    this->m_RotSpeedCurve = NULL;
    this->m_MoveRate = 0.10f;
    this->m_UpDownHeight = 150.00f;
    this->m_UpDownSpeedCoefficient = 1.00f;
    this->m_DisableAttackCollisionTime = 0.10f;
}

