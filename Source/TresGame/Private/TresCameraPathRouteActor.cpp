#include "TresCameraPathRouteActor.h"

void ATresCameraPathRouteActor::EnableCameraPathRoute(bool bEnable, int32 Priority) {
}

ATresCameraPathRouteActor::ATresCameraPathRouteActor() {
    this->m_EffectiveRange = 0.00f;
    this->m_BlendTime = 1.00f;
    this->m_bJumpGroundLook = false;
    this->m_bDistanceOnlyArea = false;
    this->m_CameraDistance = 500.00f;
}

