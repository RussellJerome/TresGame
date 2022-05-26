#include "TresUIActorAnimInstance.h"

UTresUIActorAnimInstance::UTresUIActorAnimInstance() {
    this->m_AnimNameIdle = TEXT("Idle_CM");
    this->m_AnimNameIdleFace = TEXT("Idle_CM_Face");
    this->m_AnimNameIdleBreak = TEXT("IdleBreak_CM");
    this->m_AnimNameIdleBreakFace = TEXT("IdleBreak_CM_Face");
    this->m_IdleRandomMin = 2;
    this->m_IdleRandomMax = 5;
    this->m_bEnableFaceAnim = true;
    this->m_bLinkMode = false;
    this->m_AnimType = ETresUIActorAnimType::None;
}

