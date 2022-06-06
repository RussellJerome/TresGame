#include "TresAttack4_e_ex043_Counter.h"

UTresAttack4_e_ex043_Counter::UTresAttack4_e_ex043_Counter() {
    this->m_fCounterStanceDuration = 180.00f;
    this->m_fCounterStanceMoveSpeed = 40.00f;
    this->m_fCounterAttackDistance = 300.00f;
    this->m_fMinCounterEndDistance = 200.00f;
    this->m_fMinCounterEndDistanceTime = 60.00f;
    this->m_fMaxCounterEndDistance = 1000.00f;
    this->m_fBackStepSpeed = 400.00f;
    this->m_fDefaultRootMotionScale = 1.00f;
    this->m_fHomingTurnRateDegrees = 360.00f;
    this->m_fHomingMinPitchDegrees = -60.00f;
    this->m_fHomingMaxPitchDegrees = 60.00f;
    this->m_fHomingPitchResetRate = 0.50f;
    this->m_bDebugIsDist3D = true;
}

