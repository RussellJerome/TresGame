#include "TresUIActorSimpleAnimInstance.h"

UTresUIActorSimpleAnimInstance::UTresUIActorSimpleAnimInstance() {
    this->m_AnimNameIdle = TEXT("Idle_GM");
    this->m_AnimNameIdleFace = TEXT("Idle_GM");
    this->m_AnimNameBlinkFace = TEXT("Idle_Blink_GM");
    this->m_bEnableFaceAnim = true;
    this->m_IdleFaceCount = 1;
    this->m_bCustomLipAnim = false;
}

