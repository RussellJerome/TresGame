#include "TresAttack4_e_ex114_Bunshin.h"

UTresAttack4_e_ex114_Bunshin::UTresAttack4_e_ex114_Bunshin() {
    this->m_EffDataAsset = NULL;
    this->m_WarpInFadeTime = 0.00f;
    this->m_WarpHideTime = 0.00f;
    this->m_WarpMaxHideTime = 0.00f;
    this->m_iNumBunshin = 1;
    this->m_WarpAppearFadeTime = 0.00f;
    this->m_BunshinRotationVelocity = 0.00f;
    this->m_BunshinRevolveVelocity = 0.00f;
    this->m_BunshinAccel = 0.00f;
    this->m_BunshinMaxVelocity = 0.00f;
    this->m_BunshinTargetDistance = 0.00f;
    this->m_BunshinHeightOffset = 0.00f;
    this->m_BunshinAmplitude = 0.00f;
    this->m_BunshinFrequency = 0.00f;
    this->m_WaitTime = 0.00f;
    this->m_BunshinAttackWaitTime = 0.00f;
    this->m_AttackWaitTime = 0.00f;
    this->m_WarpInAttackFadeTime = 0.00f;
    this->m_WarpAppearAttackFadeTime = 0.00f;
    this->m_WarpInBunshinFadeTime = 0.00f;
    this->m_fAttackPlayTime = 0.35f;
    this->m_fAttackHomingRotVelocity = 0.00f;
    this->m_fAttackHomingRotTime = 0.00f;
    this->m_fAttackHomingMoveVelocity = 0.00f;
    this->m_fAttackHomingMoveTime = 0.00f;
    this->m_fAttackHomingMoveBrake = 0.00f;
    this->m_bStopMoveAttackHomingHit = false;
    this->m_bDebug = false;
    this->m_EQSQuery = NULL;
    this->m_EQSQuery_Counter = NULL;
}

