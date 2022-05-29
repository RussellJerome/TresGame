#include "TresAttack15_e_ex352_DarkGalaxy.h"

UTresAttack15_e_ex352_DarkGalaxy::UTresAttack15_e_ex352_DarkGalaxy() {
    this->m_DarkMatterMaxSpreadDistance = 500.00f;
    this->m_DarkMatterSpreadSpeed = 100.00f;
    this->m_DarkMatterRotationSpeed = 90.00f;
    this->m_DarkMatterRotationAcceleration = 30.00f;
    this->m_DarkMatterRotationDeceleration = 30.00f;
    this->m_DarkMatterRotationTime = 5.00f;
    this->m_WaterSplineClass = NULL;
    this->m_WindForce = 2000.00f;
    this->m_WindForceCurveData = NULL;
    this->m_TargetPullTime = 3.00f;
    this->m_WarpEQSQuery = NULL;
    this->m_WarpDestinationZOffset = 0.00f;
    this->m_BlowAwayEffect = NULL;
    this->m_BlowAwayStartTime = 5.00f;
    this->m_TargetApproachedWindForce = 2000.00f;
    this->m_TargetApproachedPullTime = 3.00f;
    this->m_TargetApproachedCooldownTime = 1.00f;
    this->m_DampingCoefficient = 0.90f;
    this->m_TargetApproachedDelayTime = 1.00f;
    this->m_TargetFloatTime = 1.00f;
    this->m_WindEffect = NULL;
    this->m_WindForceInterpolationTime = 1.00f;
    this->m_Spline[0] = NULL;
    this->m_Spline[1] = NULL;
    this->m_WindEffectCmp = NULL;
}

