#include "TresEnemyDarkSidePawnBase.h"

void ATresEnemyDarkSidePawnBase::BP_SpawnProjectile() {
}

void ATresEnemyDarkSidePawnBase::BP_SetTest(const bool bIsTest) {
}

void ATresEnemyDarkSidePawnBase::BP_DebugSetBT() {
}

ATresEnemyDarkSidePawnBase::ATresEnemyDarkSidePawnBase() {
    this->m_ViewWay = TRES_ENEMY_DW407_VIEWWAY_SEPARATESETTING;
    this->m_ViewTargetHeight = 1000.00f;
    this->m_ProdusedProjectileAsset = NULL;
    this->m_TestAsset = NULL;
    this->m_SwitchingLockOnCursorPosHP = 50;
    this->m_PreActionDefinitionClass = NULL;
}

