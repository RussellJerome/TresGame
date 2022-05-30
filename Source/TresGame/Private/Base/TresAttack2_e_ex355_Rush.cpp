#include "TresAttack2_e_ex355_Rush.h"

UTresAttack2_e_ex355_Rush::UTresAttack2_e_ex355_Rush() {
    this->m_iMaxAttackCount = 1;
    this->m_fVerticalHomingVelocity = 0.00f;
    this->m_fAwayDistanceFromTargetOnFinish = 0.00f;
    this->m_bAwayWhileTargetDamage = false;
    this->m_bNoAwayWhileTargetAttack = false;
    this->m_bDisableAtkCollWhileAway = false;
    this->m_EQS_Away = NULL;
    this->m_fAwayRootMotionScale = 1.00f;
    this->m_bSkipSpinOnAway = false;
    this->m_bLandOnAway = false;
    this->m_fAwayAnimInterpTime = 0.00f;
    this->m_bAwayAnimInterpTime = false;
}

