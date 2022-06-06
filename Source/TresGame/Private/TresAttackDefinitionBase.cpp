#include "TresAttackDefinitionBase.h"

UTresAttackDefinitionBase::UTresAttackDefinitionBase() {
    this->m_AttackType = ETresAttackDefinition::Unknown;
    this->m_bMinDistance = false;
    this->m_MinDistance = 0.00f;
    this->m_bMaxDistance = false;
    this->m_MaxDistance = 0.00f;
    this->m_bMinHeight = false;
    this->m_MinHeight = 0.00f;
    this->m_bMaxHeight = false;
    this->m_MaxHeight = 0.00f;
    this->m_EQSRangeRefinement = 50.00f;
    this->m_bDirectPathRequired = true;
    this->m_bLineOfSightRequired = true;
    this->m_ActionEQSQuery = NULL;
    this->m_bTargetRequired = true;
    this->m_bSelfInViewport = false;
    this->m_bValidateYaw = false;
    this->m_YawOffset = 0.00f;
    this->m_YawTolerance = 90.00f;
    this->m_bValidatePitch = false;
    this->m_PitchOffset = 0.00f;
    this->m_PitchTolerance = 0.00f;
    this->m_bEditNpcAIInfo = false;
    this->m_bIndirectAttack = false;
    this->m_AttackDuration = 0.30f;
    this->m_bCanMultiHit = false;
    this->m_SuspendTime = 0.00f;
    this->m_MissScore = 1.00f;
}

