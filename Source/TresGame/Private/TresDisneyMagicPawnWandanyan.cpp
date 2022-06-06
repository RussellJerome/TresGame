#include "TresDisneyMagicPawnWandanyan.h"

ATresDisneyMagicPawnWandanyan::ATresDisneyMagicPawnWandanyan() {
    this->m_pCamera = NULL;
    this->m_fMoveSpeedLv1 = 400.00f;
    this->m_fMoveSpeedLv2 = 500.00f;
    this->m_fMoveSpeedLv3 = 600.00f;
    this->m_fMoveSpeedLv4 = 700.00f;
    this->m_fMoveSpeedLv5 = 800.00f;
    this->m_fCameraAimZLv1 = 100.00f;
    this->m_fCameraAimZLv2 = 150.00f;
    this->m_fCameraAimZLv3 = 200.00f;
    this->m_fCameraAimZLv4 = 250.00f;
    this->m_fCameraAimZLv5 = 300.00f;
    this->m_fCameraDistLv1 = 350.00f;
    this->m_fCameraDistLv2 = 400.00f;
    this->m_fCameraDistLv3 = 500.00f;
    this->m_fCameraDistLv4 = 600.00f;
    this->m_fCameraDistLv5 = 700.00f;
    this->m_fCameraPitchLv1 = -10.00f;
    this->m_fCameraPitchLv2 = -15.00f;
    this->m_fCameraPitchLv3 = -20.00f;
    this->m_fCameraPitchLv4 = -25.00f;
    this->m_fCameraPitchLv5 = -50.00f;
    this->m_fCameraAngleLv1 = 100.00f;
    this->m_fCameraAngleLv2 = 100.00f;
    this->m_fCameraAngleLv3 = 100.00f;
    this->m_fCameraAngleLv4 = 100.00f;
    this->m_fCameraAngleLv5 = 100.00f;
    this->m_fJumpGravityRateLv1 = 1.00f;
    this->m_fJumpGravityRateLv2 = 4.00f;
    this->m_fJumpGravityRateLv3 = 6.00f;
    this->m_fJumpGravityRateLv4 = 8.00f;
    this->m_fJumpGravityRateLv5 = 12.00f;
}

