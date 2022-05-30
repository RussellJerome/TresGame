#include "TresAttack9_e_ex354_RunShot.h"

UTresAttack9_e_ex354_RunShot::UTresAttack9_e_ex354_RunShot() {
    this->m_bReverse = false;
    this->m_fMinTargetDistance = 0.00f;
    this->m_fTargetDistanceMaxVelocity = 0.00f;
    this->m_fTargetDistanceAccel = 0.00f;
    this->m_fVelocity = 0.00f;
    this->m_fMaxLoopTime = 0.00f;
    this->m_fWallAvoidTurnVelocity = 360.00f;
    this->m_fAvoidStartDistance = 500.00f;
    this->m_fDotThreshold = -0.10f;
}

