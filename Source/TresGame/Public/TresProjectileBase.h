#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresProjectileRespawnType.h"
#include "ETresProjectileRespawnRotType.h"
#include "TresProjectileSpawnData.h"
#include "ETresProjectileInnerWaterVolumeProc.h"
#include "TresEffectUnit.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ETresReactionResultType.h"
#include "TresProjectileBase.generated.h"

class UTresProjectileMovementComponent;
class UParticleSystemComponent;
class UTresAtkCollComponent;
class AActor;
class ATresProjectileBase;
class UParticleSystem;
class ATresSimpleEffect;
class USQEXSEADSoundReferenceEnumSet;
class ATresCharPawnBase;

UCLASS(Abstract)
class ATresProjectileBase : public ATresPawnBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTresProjectileReflectedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTresProjectilePutEffectDelegate, FVector, InLocation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTresProjectileMoveDelegate, float, InDeltaTime);
    
    UPROPERTY(BlueprintAssignable)
    FOnTresProjectileMoveDelegate OnTickMove;
    
    UPROPERTY(BlueprintAssignable)
    FOnTresProjectilePutEffectDelegate OnPutEffect;
    
    UPROPERTY(BlueprintAssignable)
    FOnTresProjectileReflectedDelegate OnProjectileReflected;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresProjectileMovementComponent* MyMovement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MyParticle;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresAtkCollComponent* MyAtkColl;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_MainLife;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxLifeDistance;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bDoDelayFire: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FireDelayTimeMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FireDelayTimeMax;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bDoDelayAttackCollisionEnable: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DelayAttackCollisionEnableTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ExplodeLife;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bExplodeOnTimeOut: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bNoDestroyOnHit: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bPullbackOnAttackHit: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bBounceOnTakeDamage: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_bBounceOnTakeDamageVelocityScale;
    
    UPROPERTY(EditInstanceOnly)
    uint8 m_bAutoFire: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bAutoTarget: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bGravityOffOnExplode: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_AutoStuckShutdownTime;
    
    UPROPERTY(EditAnywhere)
    FName m_OverrideFinishAttackDataID;
    
    UPROPERTY(EditAnywhere)
    FName m_OverrideSituationAttackDataID;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDisableTeamCheck: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableOwnerHit: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bImmediateOwnerHit: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bAttachToHitActor: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bOnlyAttachToHitMapObj: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_AttachToHitActorOffset;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bCallPutEffectEventCall: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPutEffectDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFirstPutEffectDuration;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bCallPutEffectDistCheckXY: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 m_bDisableNotifyParentOnAttackHit: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDisableOwnerObjTypeCalcTimeDilation: 1;
    
    UPROPERTY()
    uint8 m_bIsRetargetNearReactionMagic: 1;
    
    UPROPERTY()
    float m_RetargetFrontDistance;
    
    UPROPERTY()
    float m_RetargetNearRange;
    
    UPROPERTY()
    float m_RetargetCheckAngle;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bReSpawnProjectileOnTimeOut: 1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresProjectileRespawnType m_RespawnCheckType;
    
    UPROPERTY()
    uint8 m_bReSpawnProjectileOnlyHitAny: 1;
    
    UPROPERTY()
    uint8 m_bReSpawnProjectileOnlyChrHit: 1;
    
    UPROPERTY()
    uint8 m_bReSpawnProjectileOnlyMapHit: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReSpawnProjectileRange;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bReSpawnProjectileOnGround: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ReSpawnProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    ETresProjectileRespawnRotType m_ReSpawnRotInheritType;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bReSpawnTakeOverAtkTarget: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bReSpawnTakeOverAtkCollHitList: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bReSpawnTakeOverAtkCollFinishFlag: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bReSpawnProjectileNotSendShutdownMsg: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bReSpawnTakeOverEffectColorParam: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bReSpawnTakeOverEffectAlphaParam: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresProjectileSpawnData> m_ResidueList;
    
    UPROPERTY(EditDefaultsOnly)
    ETresProjectileInnerWaterVolumeProc m_InnerWaterVolumeProc;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_InnerWaterVolumeEffect;
    
    UPROPERTY()
    TSubclassOf<ATresSimpleEffect> MyFireEffectTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEffectUnit> MyFireEffects;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bParticleSetColorParam: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bParticleSetAlphaParam: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_ParticleColorParam;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bTakeOverHitEffectColorParam: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bTakeOverHitEffectAlphaParam: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USQEXSEADSoundReferenceEnumSet* m_SoundAssets;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Exploded)
    bool bExploded;
    
public:
    ATresProjectileBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintImplementableEvent)
    void TresBpNotifyAttackHit(UTresAtkCollComponent* HitAttackCollComponent, AActor* HitActor, const FHitResult& HitResult, ETresReactionResultType HitResponse);
    
protected:
    UFUNCTION()
    void OnRep_Exploded();
    
    UFUNCTION()
    void HandleTickMove(float InDetaTime);
    
    UFUNCTION()
    void HandleOnImpact(const FHitResult& HitResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void BP_SetHomingTarget(ATresCharPawnBase* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void BP_ReqLifeOver();
    
    UFUNCTION(BlueprintCallable)
    void BP_DoSpin(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void BP_DoRotate(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void BP_DoHoming(float inDeltaSeconds);
    
};

