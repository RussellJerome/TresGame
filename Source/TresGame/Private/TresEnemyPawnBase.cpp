#include "TresEnemyPawnBase.h"

class UObject;

void ATresEnemyPawnBase::SetStuckCheck(bool bEnable) {
}

bool ATresEnemyPawnBase::IsWeaponAttacking() const {
    return false;
}

bool ATresEnemyPawnBase::IsTargetPlayer() const {
    return false;
}

bool ATresEnemyPawnBase::IsTargetGigas() const {
    return false;
}

bool ATresEnemyPawnBase::IsRevengeAttack() const {
    return false;
}

bool ATresEnemyPawnBase::IsIdle() const {
    return false;
}

bool ATresEnemyPawnBase::IsCoopMode() const {
    return false;
}

float ATresEnemyPawnBase::GetUserParam(int32 ParamIndex) const {
    return 0.0f;
}

UObject* ATresEnemyPawnBase::GetUserData() const {
    return NULL;
}

ETresEnemyUniqueID ATresEnemyPawnBase::GetEnemyUniqueID() const {
    return ETresEnemyUniqueID::TRES_ENEMY_UID_UNKNOWN;
}

float ATresEnemyPawnBase::GetAppearWait() const {
    return 0.0f;
}

ATresEnemyPawnBase::ATresEnemyPawnBase() {
    this->EnemyParent = NULL;
    this->m_EnemyUniqueID = ETresEnemyUniqueID::TRES_ENEMY_UID_UNKNOWN;
    this->m_FreeFlowKind = ESQEX_FreeFlowKind::SQEX_FREE_FLOW_KIND_ENEMY;
    this->m_AppearEffectGroupID = 3500;
    this->m_DieEffectGroupID = 3510;
    this->m_EnemyCommonParam = NULL;
    this->m_bEnableDieBodyPush = false;
    this->m_eMajorUseID = MAJOR_USE_ID_COMMON;
    this->m_PlayerKilledVoiceData = NULL;
    this->m_SoundAssets_Damage = NULL;
    this->m_bStuckCheck = true;
    this->m_bFallenAbyssCheck = true;
    this->m_bRePopForStuckAndFallenAbyssCheck = true;
    this->m_bWaterEnemy = false;
    this->m_AIWeaponComponent = NULL;
    this->m_SwirlUpEff = NULL;
    this->m_YoBindMeshScaleRate = 1.00f;
    this->m_WallHitIgnorePhysicsObjectMass = 2.00f;
}

