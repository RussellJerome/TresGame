#include "TresEnemyPawn_e_ex725.h"

ATresEnemyPawn_e_ex725::ATresEnemyPawn_e_ex725() {
    this->m_EffDataAsset = NULL;
    this->m_HitActorData = NULL;
    this->m_HitActorDataForNpc = NULL;
    this->m_ThornChainEffectActorData = NULL;
    this->m_CaptureProjectileAsset = NULL;
    this->m_CatchProjectileAsset = NULL;
    this->m_ThornMeshEffect = NULL;
    this->m_OffsetThornToTarget = 100.00f;
    this->m_OffsetTargetToThorn = 100.00f;
    this->m_EdgeEffect = NULL;
    this->m_ThornFireIntervalTime = 2.00f;
    this->m_CanMoveRange = 800.00f;
    this->m_DragLocationName = TEXT("vfx_petal_center");
    this->m_DragSpeed = 1500.00f;
    this->m_ThornOverRunDistance = 300.00f;
    this->m_ThornSpeed = 1500.00f;
    this->m_SpitOutTime = 0.50f;
    this->m_SoundData = NULL;
    this->m_BaseEffectCmp = NULL;
    this->m_ThornEffectCmp = NULL;
    this->m_RestraintEffectCmp = NULL;
    this->m_EdgeEffectCmp[0] = NULL;
    this->m_EdgeEffectCmp[1] = NULL;
    this->m_HitActor = NULL;
    this->m_ThronChainEffectActor = NULL;
    this->m_CaptureProjectile = NULL;
    this->m_CatchProjectile = NULL;
    this->m_CanCaptureRange = 800.00f;
    this->m_NextCaptureStartTime = 7.00f;
}

