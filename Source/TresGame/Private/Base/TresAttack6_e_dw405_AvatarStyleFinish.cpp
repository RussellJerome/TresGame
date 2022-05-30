#include "TresAttack6_e_dw405_AvatarStyleFinish.h"

UTresAttack6_e_dw405_AvatarStyleFinish::UTresAttack6_e_dw405_AvatarStyleFinish() {
    this->m_StartAnimData = NULL;
    this->m_LoopAnimData = NULL;
    this->m_EndAnimData = NULL;
    this->m_RotationTime = 0.00f;
    this->m_RotationEndDistance = 0.00f;
    this->m_CenterMoveDeceleration = 0.00f;
    this->m_CenterOffsetDistance = 0.00f;
    this->m_AttackVecAddRate = 0.00f;
    this->m_ShotHeight = 0.00f;
    this->m_HomingMinHeight = 0.00f;
    this->m_ProjectileSpeed = 2500.00f;
    this->m_AttachToAcceleration = 1000.00f;
    this->m_AttachToMaxSpeed = 1000.00f;
    this->m_ViewTargetDistance = 200.00f;
    this->m_Projectile = NULL;
    this->m_ActionDefClass = NULL;
}

