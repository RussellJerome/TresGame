#include "TresAttack12_e_ex361_ContinuousThrust.h"

UTresAttack12_e_ex361_ContinuousThrust::UTresAttack12_e_ex361_ContinuousThrust() {
    this->m_AppearMinAngle = 20.00f;
    this->m_AppearMaxAngle = 30.00f;
    this->m_ThrustSpeed = 6000.00f;
    this->m_ThrustAccelSpeed = 0.00f;
    this->m_ThrustMaxSpeed = 6000.00f;
    this->m_AppearDistance = 800.00f;
    this->m_MinRotateAngle = 30.00f;
    this->m_MaxRotateAngle = 30.00f;
    this->m_ThrustTime = 0.35f;
    this->m_FirstThrustTime = 0.00f;
    this->m_NextThrustTime = 0.10f;
    this->m_ThrustNum = 10;
    this->m_MoveRateXY = 0.50f;
    this->m_MoveRateZ = 0.50f;
    this->m_bModifyViewPos = false;
    this->m_bIsLockOnOff = false;
}

