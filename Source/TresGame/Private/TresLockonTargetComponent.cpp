#include "TresLockonTargetComponent.h"

UTresLockonTargetComponent::UTresLockonTargetComponent() {
    this->m_bPermissionLockOn = true;
    this->m_LockonPriority = ETresLockonPriority::LOW;
    this->m_bPermissionShootFlow = true;
    this->m_bPermissionMoveFlow = true;
    this->m_MoveFlowType = ESQEX_FreeFlowKind::SQEX_FREE_FLOW_KIND_ENEMY;
    this->m_bMoveFlowDestination = false;
    this->m_ViewTargetIndex = 0;
    this->m_AutoLockOnRange = 0.00f;
    this->m_ShootLockOnRange = 0.00f;
    this->m_bRushSuppression = false;
    this->m_CloseRange = 100.00f;
    this->m_bPermissionCoverShot = true;
}

