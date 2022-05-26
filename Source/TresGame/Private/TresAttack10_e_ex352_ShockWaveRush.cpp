#include "TresAttack10_e_ex352_ShockWaveRush.h"

UTresAttack10_e_ex352_ShockWaveRush::UTresAttack10_e_ex352_ShockWaveRush() {
    this->m_ShockwaveDistance = 500.00f;
    this->m_StartAcceleration = 100.00f;
    this->m_RushSpeed = 1000.00f;
    this->m_Acceleration = 100.00f;
    this->m_WarpEQSQuery = NULL;
    this->m_NumberOfRushes = 3;
    this->m_OverrunDistance = 1000.00f;
    this->m_Timeout = 10.00f;
    this->m_LimitPawnPitch = 30.00f;
    this->m_StartAccelerationForFinalRush = 100.00f;
    this->m_EndDecelerationForFinalRush = 100.00f;
    this->m_DodgeType = TRDT_NONE;
    this->m_EntryTime = 1.00f;
    this->m_LimitAngle = 180.00f;
    this->m_ShockWaveEffectData2 = NULL;
    this->m_FinalRushWarpEQSQuery = NULL;
    this->m_ShockWaveEffectCmp = NULL;
}

