#include "TresAttack1_e_ex042_SabelAttack.h"

UTresAttack1_e_ex042_SabelAttack::UTresAttack1_e_ex042_SabelAttack() {
    this->m_fMaxPitch = 0.00f;
    this->m_fMinPitch_ABS = 0.00f;
    this->m_fFallVelocity = 0.00f;
    this->m_fFallVelocityCurveExp = 1.00f;
    this->m_fMaxForwardVelocity = 0.00f;
    this->m_fPullVelocity = 0.00f;
    this->m_fMaxReadyChainsLength = 0.00f;
    this->m_fMinReadyChainsLength = 0.00f;
    this->m_fMinGroundMargin = 0.00f;
    this->m_fMaxAttackChainsLength2D = 0.00f;
    this->m_iMaxAttackCount = 0;
    this->m_fAttackDistance = 0.00f;
    this->m_fDisplayCheckDebug = false;
    this->m_fCheckRearMarginRate = 0.00f;
    this->m_fCheckFrontPathRadius = 100.00f;
    this->m_fLandCheckPenetrateLength = 100.00f;
}

