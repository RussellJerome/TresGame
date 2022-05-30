#include "TresAttack13_e_ex355_MagnaStorm.h"

UTresAttack13_e_ex355_MagnaStorm::UTresAttack13_e_ex355_MagnaStorm() {
    this->m_iMaxAttackCount = 0;
    this->m_fNextAttackWaitTime = 0.00f;
    this->m_fAttackStartDistance = 0.00f;
    this->m_iMaxComboOnAttack = 0;
    this->m_fApproachMaxVelocity = 0.00f;
    this->m_fApproachAccel = 0.00f;
    this->m_fTurnVelocity = 0.00f;
    this->m_EQS_Roam = NULL;
    this->m_EQS_Attack = NULL;
    this->m_fEQSWaitTime = 0.00f;
    this->m_bEndWarp = false;
    this->m_EQS_EndWarp = NULL;
    this->m_bDebugFinish = false;
    this->m_DebugCodyCollReactionType = ETresBodyCollReactionType::TRES_BODY_RT_DEFAULT;
    this->m_ApproachEffectClass = NULL;
    this->m_ApproachEffectComp = NULL;
    this->m_ApprochEffectAttachSocketName = TEXT("vfx_root");
    this->m_bRevengeAbortHpPercent = false;
}

