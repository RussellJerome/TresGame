#include "TresAttack5_e_ex358_FinishRush.h"

UTresAttack5_e_ex358_FinishRush::UTresAttack5_e_ex358_FinishRush() {
    this->m_AvatarNum = 0;
    this->m_bIsAttackEndDestroyRingCollisonProjectile = true;
    this->m_RingCollisonProjectileClass = NULL;
    this->m_bIsAttackEndDestroyFinishProjectile = true;
    this->m_FinishProjectileClass = NULL;
    this->m_RingCollisionProjectileOffsetHeight = 70.00f;
    this->m_ActionAbortTimingDelayTime = 0.00f;
    this->m_CameraEndDelayTime = 0.00f;
    this->m_CameraStartInterpTime = 0.00f;
    this->m_CameraEndInterpTime = 0.00f;
    this->m_bDisablePlayVoiceAvatar = false;
    this->m_bStartPlayVoice3D = false;
    this->m_Camera = NULL;
}

