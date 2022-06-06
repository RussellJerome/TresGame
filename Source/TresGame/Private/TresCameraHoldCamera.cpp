#include "TresCameraHoldCamera.h"

ATresCameraHoldCamera::ATresCameraHoldCamera() {
    this->DefaultLensType = ECameraLensType::LENS_DOF_OFF;
    this->FisheyeDistortionEdgeSize = 0.00f;
    this->FisheyeDistortionPowerMax = 0.00f;
    this->FisheyeDistortionPowerMin = 0.00f;
    this->FisheyeDistortionPowerDefault = 0.00f;
    this->AutoFocusBlendTime = 0.00f;
    this->InOutBlendTime = 0.50f;
    this->FStopChangeFactor = 0.00f;
    this->m_bGumiShipCamera = false;
    this->m_bDebugDraw = false;
    this->m_bDebugDraw3DPosition = false;
    this->m_bDebugTraceSimple = false;
    this->SmartphoneUnblockTag = TEXT("Smartphone_Unblock");
    this->DOFMethod = DOFM_Gaussian;
    this->CocDiameter = 0.02f;
    this->CocDiameterNear = 0.20f;
    this->BlurScale = 1.00f;
    this->MaxFocalDistanceUnderOcean = 170.00f;
    this->MaxFarDOFUnderOcean = 0.00f;
    this->MaxFarTransitionRegionUnderOcean = 0.00f;
    this->MinBlurSizeFarUnderOcean = 0.00f;
    this->CameraShakeScale = 0.00f;
    this->NearDOFMin = 0.00f;
    this->FarDOFMin = 0.00f;
    this->CameraCollisionSize = 5.00f;
    this->SelfieMotion_BlendSpaceXMax = 0.00f;
    this->SelfieMotion_BlendSpaceXMin = 0.00f;
    this->TimeElapsedMin = 10.00f;
    this->TimeElapsedMax = 15.00f;
    this->m_pScreenshotSaveController = NULL;
}

