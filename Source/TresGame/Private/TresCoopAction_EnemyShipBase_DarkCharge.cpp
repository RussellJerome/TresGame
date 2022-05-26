#include "TresCoopAction_EnemyShipBase_DarkCharge.h"

UTresCoopAction_EnemyShipBase_DarkCharge::UTresCoopAction_EnemyShipBase_DarkCharge() {
    this->m_AuraEffectComp = NULL;
    this->m_AuraEffectMatComp1 = NULL;
    this->m_AuraEffectMatComp2 = NULL;
    this->m_bSetAttackColImmediately = false;
    this->m_bSetBodyColImmediately = true;
    this->m_CollGrpName = TEXT("DarkCharge");
    this->m_AppearParticle = NULL;
    this->m_WaitAppearTime = 1.00f;
    this->m_InitSpeed = 7000.00f;
    this->m_DashSpeed = 7000.00f;
    this->m_EndSpeed = 7000.00f;
    this->m_AccelTime = 4.00f;
    this->m_MaxSpeedKeepTime = 2.50f;
    this->m_DecelTime = 2.50f;
    this->m_TimAfterHitAttack = 2.50f;
    this->m_CancelPlayerRange = 10000.00f;
    this->m_EnableCancelTime = 4.00f;
    this->m_TimeAfterCancel = 1.00f;
    this->m_TimeAfterCancelOnHitWall = 2.00f;
    this->m_DashAuraEffect = NULL;
    this->m_DashAuraEffectForLargeShip = NULL;
    this->m_DashAuraMatEffect = NULL;
}

