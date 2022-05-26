#include "TresNpcAttackDefinitionJumpBase.h"

UTresNpcAttackDefinitionJumpBase::UTresNpcAttackDefinitionJumpBase() {
    this->m_JumpStartAnim = TEXT("JumpNormalStart");
    this->m_JumpRiseLoopAnim = TEXT("JumpNormalRiseLoop");
    this->m_JumpDownLoopAnim = TEXT("JumpNormalDownLoop");
    this->m_JumpLandAnim = TEXT("Land");
    this->m_JumpAttackUpAnim = TEXT("m_1312");
    this->m_JumpAttackDownAnim = TEXT("m_1311");
    this->m_JumpHeight = 150.00f;
    this->m_JumpSpeed = 860.00f;
    this->m_LimitHeight = 500.00f;
    this->m_LimitMinHeight = 300.00f;
    this->m_GravityScale = 2.50f;
    this->m_MinMoveDistance = 1000.00f;
    this->m_MaxMoveDistance = 1500.00f;
    this->m_JumpAttackEnableZ = 50.00f;
    this->m_JumpAttackRange = 80.00f;
    this->m_JumpAttackUpRangeZ = 50.00f;
    this->m_JumpAttackDownRangeZ = 50.00f;
    this->m_JumpAttackDecelMoveSpeed = 3000.00f;
    this->m_JumpAttackMinMoveSpeed = 0.00f;
    this->m_JumpHomingSpeedEnable = false;
    this->m_JumpHomingSpeed = 45.00f;
    this->m_JumpHomingYawMaxEnable = false;
    this->m_JumpHomingYawMax = 0.00f;
    this->m_EnableSpeedCorrectionUp = true;
    this->m_EnableSpeedCorrectionDown = true;
}

