#include "TresAttack6_e_ex355_Dash.h"

UTresAttack6_e_ex355_Dash::UTresAttack6_e_ex355_Dash() {
    this->m_fFirstRoamTime = 0.00f;
    this->m_iMaxAttackCount = 0;
    this->m_fNextAttackWaitTime = 0.00f;
    this->m_fLastRoamTime = 0.00f;
    this->m_fEndAttackDistance = 0.00f;
    this->m_fMaxAttackTime = 10.00f;
    this->m_fVelocity = 0.00f;
    this->m_fAttackVelocity = 0.00f;
    this->m_fTurnVelocity = 0.00f;
    this->m_fAttackTurnVelocity = 0.00f;
    this->m_fMaxAreaRadiusPreventingOuterTurn = 0.00f;
    this->m_bMaxAreaRadiusPreventingOuterTurn = false;
    this->m_bDisableTurnToTargetOnAccel = false;
    this->m_bDisableTurnToTargetOnSwing = false;
    this->m_bAutoDirSwap = false;
    this->m_fDashAttackRotThreasholdAngle = 0.00f;
    this->m_EQS_Roam = NULL;
    this->m_EQS_RoamReverse = NULL;
    this->m_EQS_Attack = NULL;
    this->m_fEQSWaitTime = 0.00f;
    this->m_fAttackEqsWaitTime = 0.00f;
    this->m_bDebugDsip = false;
    this->m_ThrowTimingSpawnWaitTime = 0.00f;
    this->m_bSpawnOnlyLastProjExists = true;
    this->m_bDestroyLastProj = true;
    this->m_EQS_ThrowSpawn = NULL;
    this->m_bDebugDsipThrow = false;
    this->m_bDashClaymoreAtkColl = true;
}

