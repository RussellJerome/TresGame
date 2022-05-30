#include "TresCoopAttack2_e_ex359_Accel.h"

UTresCoopAttack2_e_ex359_Accel::UTresCoopAttack2_e_ex359_Accel() {
    this->m_bMoveStart = false;
    this->m_fMaxDisappearTime = 0.00f;
    this->m_MoveStartEQS = NULL;
    this->m_fMoveStartVelocity = 0.00f;
    this->m_MoveStartVelocityType = EEX359_SplineMoveVelocityType_Constant;
    this->m_fMoveStartVelocityExp = 0.00f;
    this->m_bSpawnBeamOnNotifyTimingRate = true;
    this->m_bSpawnBeamOnNotifyTiming = false;
    this->m_bUseTurnToTarget = false;
    this->m_fVerticalTractionVelocity = 0.00f;
    this->m_bDisableLockOnOnTiming = false;
    this->m_bMoveEnd = false;
    this->m_MoveEndEQS = NULL;
    this->m_fMoveEndVelocity = 0.00f;
    this->m_MoveEndVelocityType = EEX359_SplineMoveVelocityType_Constant;
    this->m_fMoveEndVelocityExp = 0.00f;
    this->m_VoiceType = EAccelVoice_e_ex359_Left;
    this->m_WaveTimingOffset = 0.00f;
    this->m_bDebugDisp = false;
}

