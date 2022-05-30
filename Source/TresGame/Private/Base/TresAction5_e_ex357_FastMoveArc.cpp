#include "TresAction5_e_ex357_FastMoveArc.h"

UTresAction5_e_ex357_FastMoveArc::UTresAction5_e_ex357_FastMoveArc() {
    this->m_StartAnimRotationSpeed = 720.00f;
    this->m_MoveType = ETresEnemyMove_e_ex357::Target;
    this->m_HeightType = ETresEnemyHeight_e_ex357::Target;
    this->m_bIsPriorityViewportInLocation = true;
    this->m_bIsEndActionTargetLocationInvalid = false;
    this->m_TargetDistance = 1000.00f;
    this->m_TargetDistanceCorrectionMaxDistance = 500.00f;
    this->m_PossibleMoveMinDistance = 500.00f;
    this->m_MaxMoveSpeed = 5000.00f;
    this->m_Acceleration = 5000.00f;
    this->m_EndAnimStartDistanceRate = 0.75f;
    this->m_InitialMoveVecOffsetPitchLand = 0.00f;
    this->m_InitialMoveVecOffsetPitchAir = 45.00f;
    this->m_YawTurnToSpeed = 360.00f;
    this->m_PitchResetSpeed = 180.00f;
    this->m_ArcSizeRate = 0.50f;
    this->m_ArcSizeRateMax = 0.50f;
    this->m_ArcSizeAddRateMaxAngle = 45.00f;
    this->m_ArcSizeAddRate = 1.50f;
    this->m_FallActionAbortTimingDelayTime = 0.00f;
    this->m_FallActionAbortTimingNumber = 100;
}

