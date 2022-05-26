#include "TresInterpTrackBonamikControlKey.h"

FTresInterpTrackBonamikControlKey::FTresInterpTrackBonamikControlKey() {
    this->m_Time = 0.00f;
    this->m_Reset = false;
    this->m_ResetPose = false;
    this->m_ReinitializeSimulationPose = false;
    this->m_RestoreDefaultParams = false;
    this->m_PreRoll = 0;
    this->m_PreRollForAttachment = 0;
    this->m_SimulationOnOff = ESQEX_Bonamik_ControlType_DoNothing;
    this->m_GroundOnOff = ESQEX_Bonamik_ControlType_DoNothing;
    this->m_ChangeInnerCone = false;
    this->m_InnerConeScale = 0.00f;
    this->m_ChangeOuterCone = false;
    this->m_OuterConeScale = 0.00f;
    this->m_ChangeLocalForce = false;
    this->m_LocalForceScale = 0.00f;
    this->m_ChangeWindScale = false;
    this->m_GroupWindScale = 0.00f;
    this->m_ChangeHighFPSEvaluation = false;
    this->m_EnableHighFPSEvaluation = false;
}

