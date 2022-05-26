#include "TresAttack3_e_ex316_DarknessRuler.h"

UTresAttack3_e_ex316_DarknessRuler::UTresAttack3_e_ex316_DarknessRuler() {
    this->m_ExplosionSignTime = 4.00f;
    this->m_StartAttackMotionTime = 6.00f;
    this->m_ExplosionRangeEffectData = NULL;
    this->m_WaterSplineClass = NULL;
    this->m_DarknessRulerWindForceCurveData = NULL;
    this->m_DarknessRulerPullVelocityCurveData = NULL;
    this->m_DarknessRulerColorChangeCurveData = NULL;
    this->m_WindInvalidRadius = 0.00f;
    this->m_LoopMotionTime = 0.20f;
    this->m_AnnihilationStartVoice = NULL;
    this->m_AnnihilationExplosionVoice = NULL;
    this->m_StartVoice = NULL;
    this->m_ExplosionVoice = NULL;
    this->m_CooperationVoice = NULL;
    this->m_ExplosionRangeEffectCmp = NULL;
}

