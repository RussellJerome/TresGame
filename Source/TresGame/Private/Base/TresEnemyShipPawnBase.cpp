#include "TresEnemyShipPawnBase.h"
#include "Particles/ParticleSystemComponent.h"
#include "TresMapMarkerComponent.h"
#include "TresSkeletalMeshComponent.h"
#include "TresCAShipComponent.h"

void ATresEnemyShipPawnBase::SetShipAttackHitCollisionEnabled(bool bEnable) {
}

bool ATresEnemyShipPawnBase::IsWarpOut() const {
    return false;
}

bool ATresEnemyShipPawnBase::IsSummonedShip() const {
    return false;
}

bool ATresEnemyShipPawnBase::IsSeaGodModeTidalWave() const {
    return false;
}

bool ATresEnemyShipPawnBase::IsSeaGodMode() const {
    return false;
}

bool ATresEnemyShipPawnBase::IsPlayingBreakingMast() const {
    return false;
}

bool ATresEnemyShipPawnBase::IsFinishedOfWeaponAttack() const {
    return false;
}

bool ATresEnemyShipPawnBase::IsDestroyedMast() const {
    return false;
}

bool ATresEnemyShipPawnBase::IsBattleModeCapturePlayerShip() const {
    return false;
}

bool ATresEnemyShipPawnBase::IsAliveShipCore(TEnumAsByte<ETresEnemyShip::Type> coreType) const {
    return false;
}

float ATresEnemyShipPawnBase::GetSpankerMoveBlendRate() const {
    return 0.0f;
}

int32 ATresEnemyShipPawnBase::GetShipDamageCount() const {
    return 0;
}

int32 ATresEnemyShipPawnBase::GetShipCoreNum() const {
    return 0;
}

int32 ATresEnemyShipPawnBase::GetMemberCountOfBlackShipSmall() const {
    return 0;
}

int32 ATresEnemyShipPawnBase::GetMemberCountOfBlackShipLarge() const {
    return 0;
}

float ATresEnemyShipPawnBase::GetMastMoveBlendRate() const {
    return 0.0f;
}

int32 ATresEnemyShipPawnBase::GetMastHP() const {
    return 0;
}

bool ATresEnemyShipPawnBase::EnableSpawnBlackShipLarge() const {
    return false;
}

void ATresEnemyShipPawnBase::BP_SetFadeIn(float FadeTime) {
}

void ATresEnemyShipPawnBase::BP_ForceSetFadeOut() {
}

ATresEnemyShipPawnBase::ATresEnemyShipPawnBase() {
    this->m_ShipSubType = ETresEnemyShipSubType::DEFAULT;
    this->m_ShipSpeedDeclRateOnDestroyedMast = 0.17f;
    this->m_ShipCoreDamageWeight = 1.50f;
    this->m_ShipMastDamageWeight = 0.50f;
    this->m_bDeadOnShipCoreAllDestroyed = true;
    this->m_ShipMastBlendMaxSpeed = 5000.00f;
    this->m_SpankerCheckSpeed = 10.00f;
    this->m_SpankerParamSpeed = 1.00f;
    this->m_KnockBackMovePower = 5.00f;
    this->m_KnockBackRollPower = 8.00f;
    this->m_KnockBackYawPower = 3.00f;
    this->m_SurfaceEffectDispSpeed = 2000.00f;
    this->m_SlowDownSpeedPerHitWindChaser = 150.00f;
    this->m_SlowDownTimerAfterWindChaser = 10.00f;
    this->m_MaxCannonNum = 6;
    this->m_LifeTimeDustEffect = 20.00f;
    this->m_MaxNumDustEffect = 5;
    this->m_bDisableMastDamage = false;
    this->m_bIsMastHpLimitOne = false;
    this->m_bSpawnedChildInheritGroup = true;
    this->m_MapMarker = CreateDefaultSubobject<UTresMapMarkerComponent>(TEXT("EnemyShipBase_sMapMarker"));
    this->m_MastMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("EnemyShipBase_SkeletalMastMesh"));
    this->m_DriverMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("EnemyShipBase_DriverSkeletalMesh"));
    this->m_SeaSurfaceParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EnemyShipBase_SeaSurfaceParticle"));
    this->m_CAShipComponent = CreateDefaultSubobject<UTresCAShipComponent>(TEXT("EnemyShipBase_CAShipComponent"));
    this->m_ExpParticleComponent = NULL;
    this->m_CoreHitParticleAsset01 = NULL;
    this->m_CoreHitParticleAsset02 = NULL;
    this->m_CoreHitParticleAsset03 = NULL;
    this->m_MastHitParticle = NULL;
    this->m_BodyHitParticle = NULL;
    this->m_DustOnHitParticle = NULL;
    this->m_CoreDestroyParticleAsset01 = NULL;
    this->m_CoreDestroyParticleAsset02 = NULL;
    this->m_CoreDestroyParticleAsset03 = NULL;
    this->m_CoreParticleAsset01 = NULL;
    this->m_CoreParticleAsset02 = NULL;
    this->m_CoreParticleAsset03 = NULL;
    this->m_CoreThonParticleFrontAsset = NULL;
    this->m_CoreThonParticleSideAsset = NULL;
    this->m_CoreThonParticleBackAsset = NULL;
    this->m_SinkingExplosion = NULL;
    this->m_EnterDestroyParticle = NULL;
    this->m_MinSpawnCoreNum = 1;
    this->m_MaxSpawnCoreNum = 4;
    this->m_SpawnCoreWidth = 800.00f;
    this->m_CoreItemTypeSpawnWeight01 = 20;
    this->m_CoreItemTypeSpawnWeight02 = 20;
    this->m_CoreItemTypeSpawnWeight03 = 10;
    this->m_CoreParamName01 = TEXT("Core");
    this->m_CoreParamName02 = TEXT("Core");
    this->m_CoreParamName03 = TEXT("Core");
    this->m_BreakMastEff = NULL;
    this->m_BreakMastGroupId = 10;
    this->m_BreakMastNotifyID = 110;
    this->m_DisableForceFadeOutOnDeadNotifyID = 210;
}

