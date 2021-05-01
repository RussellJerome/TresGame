// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresPawnBase.h"
#include "TresGame.h"
#include "TresProjectileBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresProjectileBase : public ATresPawnBase
{
	GENERATED_BODY()
public:
	//struct FScriptMulticastDelegate                    OnTickMove;
	//struct FScriptMulticastDelegate                    OnPutEffect;
	//struct FScriptMulticastDelegate                    OnProjectileReflected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	class UTresProjectileMovementComponent* MyMovement;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	class UParticleSystemComponent* MyParticle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	class UTresAtkCollComponent* MyAtkColl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	float m_MainLife;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	float m_MaxLifeDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bDoDelayFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	float m_FireDelayTimeMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	float m_FireDelayTimeMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bDoDelayAttackCollisionEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	float m_DelayAttackCollisionEnableTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	float m_ExplodeLife;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bExplodeOnTimeOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bNoDestroyOnHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bPullbackOnAttackHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bBounceOnTakeDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	float m_bBounceOnTakeDamageVelocityScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bAutoFire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bAutoTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bGravityOffOnExplode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	float m_AutoStuckShutdownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	FName m_OverrideFinishAttackDataID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	FName m_OverrideSituationAttackDataID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bDisableTeamCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bEnableOwnerHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bImmediateOwnerHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bAttachToHitActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bOnlyAttachToHitMapObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	struct FVector m_AttachToHitActorOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bCallPutEffectEventCall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	float m_fPutEffectDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	float m_fFirstPutEffectDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bCallPutEffectDistCheckXY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bDisableNotifyParentOnAttackHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bDisableOwnerObjTypeCalcTimeDilation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bIsRetargetNearReactionMagic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	float m_RetargetFrontDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	float m_RetargetNearRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	float m_RetargetCheckAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bReSpawnProjectileOnTimeOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	TEnumAsByte<ETresProjectileRespawnType> m_RespawnCheckType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bReSpawnProjectileOnlyHitAny;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bReSpawnProjectileOnlyChrHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bReSpawnProjectileOnlyMapHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	float m_ReSpawnProjectileRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bReSpawnProjectileOnGround;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	class UClass* m_ReSpawnProjectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	TEnumAsByte<ETresProjectileRespawnRotType> m_ReSpawnRotInheritType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bReSpawnTakeOverAtkTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bReSpawnTakeOverAtkCollHitList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bReSpawnTakeOverAtkCollFinishFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bReSpawnProjectileNotSendShutdownMsg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bReSpawnTakeOverEffectColorParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bReSpawnTakeOverEffectAlphaParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	TArray<struct FTresProjectileSpawnData> m_ResidueList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	TEnumAsByte<ETresProjectileInnerWaterVolumeProc> m_InnerWaterVolumeProc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	class UParticleSystem* m_InnerWaterVolumeEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	class UClass* MyFireEffectTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	TArray<struct FTresEffectUnit> MyFireEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bParticleSetColorParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bParticleSetAlphaParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	struct FLinearColor m_ParticleColorParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bTakeOverHitEffectColorParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool m_bTakeOverHitEffectAlphaParam;

	//class USQEXSEADSoundReferenceEnumSet* m_SoundAssets;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileBase")
	bool bExploded;

	UFUNCTION(BlueprintCallable, Category = "TresProjectileBase")
	void TresBpNotifyAttackHit(class UTresAtkCollComponent* HitAttackCollComponent, class AActor* HitActor, const struct FHitResult& HitResult, ETresReactionResultType HitResponse) {};
	//void OnTresProjectileReflectedDelegate__DelegateSignature();
	//void OnTresProjectilePutEffectDelegate__DelegateSignature(const struct FVector& InLocation);
	//void OnTresProjectileMoveDelegate__DelegateSignature(float InDeltaTime);
	//void OnRep_Exploded();
	
	UFUNCTION(BlueprintCallable, Category = "TresProjectileBase")
	void HandleTickMove(float InDetaTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresProjectileBase")
	void HandleOnImpact(const struct FHitResult& HitResult) {};

	UFUNCTION(BlueprintCallable, Category = "TresProjectileBase")
	void BP_SetHomingTarget(class ATresCharPawnBase* InTarget) {};

	UFUNCTION(BlueprintCallable, Category = "TresProjectileBase")
	void BP_ReqLifeOver() {};

	UFUNCTION(BlueprintCallable, Category = "TresProjectileBase")
	void BP_DoSpin(float inDeltaSeconds) {};

	UFUNCTION(BlueprintCallable, Category = "TresProjectileBase")
	void BP_DoRotate(float inDeltaSeconds) {};

	UFUNCTION(BlueprintCallable, Category = "TresProjectileBase")
	void BP_DoHoming(float inDeltaSeconds) {};
};
