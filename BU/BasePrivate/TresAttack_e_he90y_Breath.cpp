#include "TresAttack_e_he90y_Breath.h"

UTresAttack_e_he90y_Breath::UTresAttack_e_he90y_Breath() {
    this->m_BlendSpaceYawThreshold = 0.00f;
    this->m_BlendSpacePitchThreshold = 0.00f;
    this->m_bHoming = false;
    this->m_fHomingVelocity = 0.00f;
    this->m_PitchCurve = NULL;
    this->m_fLoopTime = 0.00f;
    this->m_fMaxAttackLength = 3000.00f;
    this->m_fDefaultAttackLength = 3000.00f;
    this->m_bStopAttackOnHitEnd = false;
    this->m_AttackParticle = NULL;
    this->m_AttackParticleComp = NULL;
    this->m_AttackHitParticle = NULL;
    this->m_AttackHitParticleComp = NULL;
    this->m_bUseLoopEffect = false;
    this->m_fAttackHitParticleInterval = 0.00f;
    this->m_BlendSpaceSpeed = 0.00f;
    this->m_BlendSpaceSpeed_Start = 0.00f;
    this->m_AdjustBlendSpaceSpeed = 0.00f;
    this->m_fBeginAnimAdjustBlendSpaceSpeedScaleCurve = NULL;
    this->m_fLoopAnimAdjustBlendSpaceSpeedScaleCurve = NULL;
    this->m_AdjustBlendSpaceThreshold = 1.00f;
    this->m_fBeginAnimBlendSpaceValueScale = 0.00f;
    this->m_fBeginAnimBlendSpaceValueScaleCurve = NULL;
    this->m_bBoolArray[0] = 0;
    this->m_bBoolArray[1] = 0;
    this->m_bBoolArray[2] = 0;
    this->m_bBoolArray[3] = 0;
    this->m_bBoolArray[4] = 0;
    this->m_bBoolArray[5] = 0;
    this->m_bBoolArray[6] = 0;
    this->m_bBoolArray[7] = 0;
    this->m_bBoolArray[8] = 0;
    this->m_bBoolArray[9] = 0;
}

