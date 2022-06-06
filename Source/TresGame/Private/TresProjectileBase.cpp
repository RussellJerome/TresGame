#include "TresProjectileBase.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystemComponent.h"
#include "TresProjectileMovementComponent.h"
#include "TresAtkCollComponent.h"

class ATresCharPawnBase;


void ATresProjectileBase::OnRep_Exploded() {
}

void ATresProjectileBase::HandleTickMove(float InDetaTime) {
}

void ATresProjectileBase::HandleOnImpact(const FHitResult& HitResult) {
}

void ATresProjectileBase::BP_SetHomingTarget(ATresCharPawnBase* InTarget) {
}

void ATresProjectileBase::BP_ReqLifeOver() {
}

void ATresProjectileBase::BP_DoSpin(float inDeltaSeconds) {
}

void ATresProjectileBase::BP_DoRotate(float inDeltaSeconds) {
}

void ATresProjectileBase::BP_DoHoming(float inDeltaSeconds) {
}

void ATresProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATresProjectileBase, bExploded);
}

ATresProjectileBase::ATresProjectileBase() {
    this->MyMovement = CreateDefaultSubobject<UTresProjectileMovementComponent>(TEXT("ProjectileComp"));
    this->MyParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComp"));
    this->MyAtkColl = CreateDefaultSubobject<UTresAtkCollComponent>(TEXT("TresAtkColl0"));
    this->m_MainLife = 10.00f;
    this->m_MaxLifeDistance = 0.00f;
    this->m_bDoDelayFire = false;
    this->m_FireDelayTimeMin = 0.00f;
    this->m_FireDelayTimeMax = 0.00f;
    this->m_bDoDelayAttackCollisionEnable = false;
    this->m_DelayAttackCollisionEnableTime = 0.00f;
    this->m_ExplodeLife = 0.00f;
    this->m_bExplodeOnTimeOut = false;
    this->m_bNoDestroyOnHit = false;
    this->m_bPullbackOnAttackHit = false;
    this->m_bBounceOnTakeDamage = false;
    this->m_bBounceOnTakeDamageVelocityScale = 1.00f;
    this->m_bAutoFire = false;
    this->m_bAutoTarget = false;
    this->m_bGravityOffOnExplode = false;
    this->m_AutoStuckShutdownTime = 0.00f;
    this->m_bDisableTeamCheck = false;
    this->m_bEnableOwnerHit = false;
    this->m_bImmediateOwnerHit = false;
    this->m_bAttachToHitActor = false;
    this->m_bOnlyAttachToHitMapObj = false;
    this->m_bCallPutEffectEventCall = false;
    this->m_fPutEffectDuration = 200.00f;
    this->m_fFirstPutEffectDuration = 0.00f;
    this->m_bCallPutEffectDistCheckXY = false;
    this->m_bDisableNotifyParentOnAttackHit = false;
    this->m_bDisableOwnerObjTypeCalcTimeDilation = false;
    this->m_bIsRetargetNearReactionMagic = false;
    this->m_RetargetFrontDistance = 0.00f;
    this->m_RetargetNearRange = 0.00f;
    this->m_RetargetCheckAngle = 0.00f;
    this->m_bReSpawnProjectileOnTimeOut = false;
    this->m_RespawnCheckType = ETresProjectileRespawnType::TPR_TYPE_HIT_ALWAYS;
    this->m_bReSpawnProjectileOnlyHitAny = false;
    this->m_bReSpawnProjectileOnlyChrHit = false;
    this->m_bReSpawnProjectileOnlyMapHit = false;
    this->m_ReSpawnProjectileRange = 0.00f;
    this->m_bReSpawnProjectileOnGround = false;
    this->m_ReSpawnProjectileClass = NULL;
    this->m_ReSpawnRotInheritType = ETresProjectileRespawnRotType::TPRR_NORMAL;
    this->m_bReSpawnTakeOverAtkTarget = false;
    this->m_bReSpawnTakeOverAtkCollHitList = false;
    this->m_bReSpawnTakeOverAtkCollFinishFlag = false;
    this->m_bReSpawnProjectileNotSendShutdownMsg = false;
    this->m_bReSpawnTakeOverEffectColorParam = false;
    this->m_bReSpawnTakeOverEffectAlphaParam = false;
    this->m_InnerWaterVolumeProc = ETresProjectileInnerWaterVolumeProc::NOTHING;
    this->m_InnerWaterVolumeEffect = NULL;
    this->MyFireEffectTemplate = NULL;
    this->m_bParticleSetColorParam = false;
    this->m_bParticleSetAlphaParam = false;
    this->m_bTakeOverHitEffectColorParam = false;
    this->m_bTakeOverHitEffectAlphaParam = false;
    this->m_SoundAssets = NULL;
    this->bExploded = false;
}

