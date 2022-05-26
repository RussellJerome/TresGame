#include "TresGumiShipPlayerBaseTrackingParameter.h"

FTresGumiShipPlayerBaseTrackingParameter::FTresGumiShipPlayerBaseTrackingParameter() {
    this->m_fTrackingTime = 0.00f;
    this->m_fTracking2DSpeed = 0.00f;
    this->m_fRailSlide2DSpeed = 0.00f;
    this->m_fTrackingSpeed = 0.00f;
    this->m_fBetweenDist = 0.00f;
    this->m_fMostNearDistRatioForBoost = 0.00f;
    this->m_fTrackingRange = 0.00f;
    this->m_fCameraArmLength = 0.00f;
    this->m_fCameraPitch = 0.00f;
    this->m_fFOV = 0.00f;
    this->m_fNearClipPlane = 0.00f;
    this->m_fAdjustmentUD = 0.00f;
    this->m_fAdjustmentLR = 0.00f;
    this->m_fParseAdjustmentUD = 0.00f;
    this->m_fParseAdjustmentLR = 0.00f;
    this->m_fModelParseAdjustmentUD = 0.00f;
    this->m_fModelParseAdjustmentLR = 0.00f;
    this->m_fInterpSpeedOfCamera = 0.00f;
}

