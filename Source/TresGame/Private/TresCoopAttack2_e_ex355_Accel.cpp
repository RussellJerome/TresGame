#include "TresCoopAttack2_e_ex355_Accel.h"

UTresCoopAttack2_e_ex355_Accel::UTresCoopAttack2_e_ex355_Accel() {
    this->m_bSpawnWaveOnNotifyTimingRate = true;
    this->m_bSpawnWaveOnNotifyTiming = false;
    this->m_fWaveMargin = 200.00f;
    this->m_iWaveNum = 4;
    this->m_fDefaultRootMotionScaleDistance = 600.00f;
    this->m_fMaxRootMotionScale = 1.00f;
    this->m_bUseTurnToTarget = false;
    this->m_bWarpDisappear = false;
    this->m_fWarpDisappearTime = 0.00f;
    this->m_bWarpMove = false;
    this->m_EQS_Warp = NULL;
    this->m_bEndWarpMove = false;
    this->m_EQS_EndWarp = NULL;
    this->m_WaveTimingOffset = 0.00f;
    this->m_WaveOneFrameDelayScale = 0.00f;
    this->m_bDebugDisp_Wave = false;
    this->m_bDebugDisp_Angle_Scale = false;
}

