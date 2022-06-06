#include "HoldCameraParam.h"

FHoldCameraParam::FHoldCameraParam() {
    this->m_LimitPitchMax = 0.00f;
    this->m_LimitPitchMin = 0.00f;
    this->m_FovDefault = 0.00f;
    this->m_ZoomFovMax = 0.00f;
    this->m_ZoomFovMin = 0.00f;
    this->m_ZoomTotalTime = 0.00f;
    this->m_CameraFStopMax = 0.00f;
    this->m_CameraFStopMin = 0.00f;
    this->m_CameraFStopDefault = 0.00f;
    this->m_HeightOffsetMax = 0.00f;
    this->m_HeightOffsetMin = 0.00f;
    this->m_RollMax = 0.00f;
    this->m_RollMin = 0.00f;
    this->m_bCalcDOF = false;
}

