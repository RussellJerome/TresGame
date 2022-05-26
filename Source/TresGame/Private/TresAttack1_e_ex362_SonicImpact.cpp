#include "TresAttack1_e_ex362_SonicImpact.h"

UTresAttack1_e_ex362_SonicImpact::UTresAttack1_e_ex362_SonicImpact() {
    this->m_InitMoveSpeed = 2000.00f;
    this->m_MinMoveTime = 1.00f;
    this->m_AttackEndMoveScale = 0.00f;
    this->m_RotRate = 1.00f;
    this->m_TurnCountMax = 0;
    this->m_TarnEQSQuery = NULL;
    this->m_TarnEQSMinRadius = 300.00f;
    this->m_TarnEQSMaxRadius = 1000.00f;
    this->m_AttackCollisionIntervalTime = 0.00f;
    this->m_ChaseDist = 300.00f;
    this->m_AfterChaseMoveTime = 0.40f;
    this->m_AttackHitMoveTime = 0.20f;
    this->m_AtkHitSEAsset = NULL;
    this->m_WarpEQSQuery = NULL;
    this->m_ReflectedzWaitTime = 0.10f;
}

