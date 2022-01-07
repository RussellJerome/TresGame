// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresPawnBase.h"
#include "AlphaBlend.h"
#include "TresGame.h"
#include "TresCharMovementComponent.h"
#include "TresSkeletalMeshComponent.h"
#include "TresCharPawnBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresDtorState, TEnumAsByte<ETresStateID>, StateID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresCtorState, TEnumAsByte<ETresStateID>, StateID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresAnimNotifyStartBpEvent, const FName&, AnimSeqName, TEnumAsByte<ETresAnimNotifyBpEventID>, EventID, int, Param);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresAnimNotifyEndBpEvent, const FName&, AnimSeqName, TEnumAsByte<ETresAnimNotifyBpEventID>, EventID, int, Param);

/**
 *
 */
UCLASS()
class TRESGAME_API ATresCharPawnBase : public ATresPawnBase
{
	GENERATED_BODY()
public:
	ATresCharPawnBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
	{
/*#if WITH_EDITORONLY_DATA
		MyMovement = CreateDefaultSubobject<UTresCharMovementComponent>(TEXT("CharMoveComp"));
		MyMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("MyMesh"));
#endif*/
		//MyMovement = CreateDefaultSubobject<UTresCharMovementComponent>(TEXT("CharMoveComp"));
		//MyMesh = ObjectInitializer.CreateDefaultSubobject<UTresSkeletalMeshComponent>(this, TEXT("MyMesh"));
	};

	UPROPERTY(Category=Character, VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	class UTresCharMovementComponent* MyMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	class UTresSkeletalMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	class UTresAtkCollComponent* MyAtkColl;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	//	class UTresBodyCollComponent* MyBodyColl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	class UTresEquipmentComponent* MyEquipment;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	//	class UTresStateQueueComponent* MyStateComp;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	//	class UTresEffectAttachComponent* MyEffectAtt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	FVector BaseTranslationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool bPressedJump;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	float JumpKeyHoldTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	float JumpMaxHoldTime;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	//struct FScriptMulticastDelegate OnCharacterMovementUpdated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	TEnumAsByte<ETresChrUniqueID> m_ChrUniqueID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	int DebugLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	int MaxHitPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	int m_HitPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	int MaxMagicPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	int m_MagicPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bAppearMsgSended;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	float MyMpChargeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	int MaxFocusPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	int m_FocusPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	ETresBodyCollReactionType m_DefaultBodyCollReactionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bEnableAttractionFlowHitPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bEnableAttractionFlowMarkerProc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	int m_AttractionHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	TEnumAsByte<ETresCommandKind> m_AttractionMarkerCommandID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	float m_AttractionMarkerRestTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bRootTransCalcRootSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool bIsBattleMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bIsInvincible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bIsNoDamageResponse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bNoHpDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bIsHpLimitOne;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bIsHpLimitOneExceptPlayerAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bIsNeedAttachAttackHitEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bDisableInvincibleInCinematicMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	float m_ControlAnalogInputModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	float MyRailSlideSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	float m_RailSlideJumpInertialVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	float m_RailSlideJumpInertialBrake;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	FVector m_DangleOffsetPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bEquipmentAutoSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	class UTresPoleComponent* m_LastHitPoleComponent;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	//class UTresHopComponent* m_LastHitHopComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	float m_NoActionCounter;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	//class UParticleSystem* m_LastWaterOuterEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bCameraLookPosToMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	class UTresUIDataAssetStatus* m_pUIDataStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool MySkelCtrl_IkDisableFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	float MySkelCtrl_IkInitValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bApplyWetnessMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bApplyOceanWetnessMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	float m_ApplyOceanWetnessMaterialMinHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	float m_ApplyOceanWetnessMaterialMaxHeight;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	//	class ATresAdhereObjBase* m_pBadStatAdhereActor;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	//struct FScriptMulticastDelegate OnTresTakeDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	class UTresLockonTargetComponent* m_FlowTarget;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	//	class UTresAttractionFlowMarkerComponent* m_AttractionFlowMarker;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	//	class UTresSwimRingComponent* m_pSwimRing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	TEnumAsByte<ETresTeam> MyTeam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	class USQEX_ParticleAttachDataAsset* m_CmnAuraEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	class USQEX_ParticleAttachDataAsset* m_CmnMagicCastEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	class USQEX_ParticleAttachDataAsset* m_CmnBadStatesEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	class USQEX_ParticleAttachDataAsset* m_CmnAppearEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bEnableRegistFootStepEffectGen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	bool m_bEnableWaterRippleEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	FName m_RippleBaseBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	float m_RippleLocationShiftScale;

	/*
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	struct FScriptMulticastDelegate OnCtorState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	struct FScriptMulticastDelegate OnDtorState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	struct FScriptMulticastDelegate OnAnimNotifyStartBpEvent;*/

	UPROPERTY(BlueprintAssignable, Category = "TresCharPawnBase")
	FTresCtorState OnCtorState;

	UPROPERTY(BlueprintAssignable, Category = "TresCharPawnBase")
	FTresDtorState OnDtorState;

	UPROPERTY(BlueprintAssignable, Category = "TresCharPawnBase")
	FTresAnimNotifyStartBpEvent OnAnimNotifyStartBpEvent;

	UPROPERTY(BlueprintAssignable, Category = "TresCharPawnBase")
	FTresAnimNotifyEndBpEvent OnAnimNotifyEndBpEvent;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	struct FScriptMulticastDelegate OnAnimNotifyEndBpEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	struct FScriptMulticastDelegate OnReactorDoCommand;
	*/

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	//class USQEXSEADSoundReferenceEnumSet* m_AutoSeAssets;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	//class USQEXSEADAutoSeComponent* MyAutoSe;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharPawnBase")
	//class USQEXSEADAutoSeComponentCallbackDefault* MyAutoSeCallback;

	/* IK these are not blueprintcallable, but I put it here for the UFUNCTION
	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void TresDtorState__DelegateSignature(TEnumAsByte<ETresStateID> StateID);

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void TresCtorState__DelegateSignature(TEnumAsByte<ETresStateID> StateID);

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void TresAnimNotifyStartBpEvent__DelegateSignature(const FName& AnimSeqName, TEnumAsByte<ETresAnimNotifyBpEventID> EventID, int Param);

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void TresAnimNotifyEndBpEvent__DelegateSignature(const FName& AnimSeqName, TEnumAsByte<ETresAnimNotifyBpEventID> EventID, int Param);
	*/

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetStopAI(bool bStop) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetMoveMode(TEnumAsByte<EMovementMode> NewMovementMode, bool bClearVelocity) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetMaxWalkSpeed(float InMaxWalkSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetMaxSwimSpeed(float InMaxSwimSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetMaxFlySpeed(float InMaxFlySpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetMaxAcceleration(float InAcceleration) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetMagicPoint(int InMP) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetIKinemaEnable(bool Enable, bool Force) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetHitPoint(int InHP) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetGravityScale(float InGravityScale) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetFocusPoint(int InFP) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetEnableGravityLock(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetEnableGravity(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetConditionNoHpDamage(bool InNoHpDamage) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetConditionNoDamageResponse(bool InNoDamageResponse) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetConditionInvincible(bool InInvincible) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetConditionHpLimitOneExceptPlayerAttack(bool InHpLimitOne) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetConditionHpLimitOne(bool InHpLimitOne) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetBuoyancy(float InBuoyancy) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetBodyCollReactionType(ETresBodyCollReactionType InType, const FName& InGroup) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void SetBattleMode(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void ResetMaxWalkSpeed() {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void ResetMaxSwimSpeed() {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void ResetMaxFlySpeed() {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void ResetMaxAcceleration() {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void ResetGravityScale() {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void ResetBuoyancy() {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void ResetBodyCollReactionType(const FName& InGroup) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void RequestDirectMove(const FVector& refVelocity, bool bForceMaxSpeed) {};

	//Implementable
	//UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	//void ReceiveTresTakeDamage(float DamagePoint, class AController* InstigatedBy, const struct FHitResult& HitInfo, const struct FTresDamageInfo& DamageInfo, const struct FVector& ShotFromDirection, class AActor* DamageCauser);

	//Implementable
	//UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	//void ReceiveDtorState(TEnumAsByte<ETresStateID> StateID);

	//UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	//void ReceiveCtorState(TEnumAsByte<ETresStateID> StateID);

	//UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	//void ReceiveAnimNotifyStartBpEvent(const FName& AnimSeqName, TEnumAsByte<ETresAnimNotifyBpEventID> EventID, int Param);

	//UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	//void ReceiveAnimNotifyEndBpEvent(const FName& AnimSeqName, TEnumAsByte<ETresAnimNotifyBpEventID> EventID, int Param);

	//UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	//void OnLaunchedCharPawn(float Height);

	//UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	//void OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);

	//UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	//void OnJumped();

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	bool LaunchCharPawn(float Height, bool bForce, TEnumAsByte<ETresPlayerJumpModes> InJumpMode) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void LaunchCharacter(const FVector& LaunchVelocity, bool bXYOverride, bool bZOverride) {};

	//UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	//void UpdateCustomMovement(float DeltaTime) {};

	//UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	//void OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode) {};

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsStopAI() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsOnGround() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsMoveModeWalking() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsMoveModeSwimming() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsMoveModeRailSlide() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsMoveModeFlying() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsMoveModeFalling() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsLandAnimPose() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsDisableAutoUpdateVelocity() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsConditionNoHpDamage() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsConditionNoDamageResponse() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsConditionInvincible() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsConditionHpLimitOneExceptPlayerAttack() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsConditionHpLimitOne() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsCinematicEndAIRestart() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsBattlePose() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool IsBattleMode() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	float GetVelocityZ() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	class UTresCharMovementComponent* GetTresCharMovementComponent() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	TEnumAsByte<ETresStateID> GetStateID() { return ETresStateID::TSID_STATE_ACTION; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	float GetMaxWalkSpeed() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	float GetMaxSwimSpeed() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	int GetMaxMagicPoint() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	int GetMaxHitPoint() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	int GetMaxFocusPoint() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	float GetMaxFlySpeed() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	int GetMagicPoint() { return 0; };

	//UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	//class USQEX_KBD_Component* GetKBDComponent() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	float GetHitPointRate() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	int GetHitPointPer() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	int GetHitPoint() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	float GetGravityZ() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	int GetFocusPoint() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	float GetDefaultMaxWalkSpeed() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	float GetDefaultMaxSwimSpeed() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	float GetDefaultMaxFlySpeed() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	float GetDefaultBuoyancy() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	FVector GetCurrentAcceleration() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	int GetChrLevel() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	float GetBuoyancy() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	ETresBodyCollReactionType GetBodyCollReactionType(const FName& InGroup) { return ETresBodyCollReactionType::TRES_BODY_RT_DEFAULT; };

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void DisableAutoUpdateVelocity(bool bInDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void ClearVelocity() {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void ClampVelocityZ(float Min, float Max) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void ClampVelocityXY(float Min, float Max) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void ClampVelocity(float Min, float Max) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	FVector CalcJumpVector(const struct FVector& InTarget, float inAngle) { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_UseMagicPoint(int UseMP) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_StartCinematicLookAt(class AActor* TargetActor, const FName& SocketName, float BlendIn, EAlphaBlendOption InBlendOption) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_SetWeaponVisible(bool bVisible, bool bAppearEffect, float InPlayRate) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_SetWeaponRageformRate(float StartValue, float EndValue, float InterpTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_SetVelocityXY(const struct FVector& refVector) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_SetMovementInputXY(const struct FVector& WorldDirection, float ScaleValue, bool bForce) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_SetMovementInput(const struct FVector& WorldDirection, float ScaleValue, bool bForce) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_SetAccelerationDirXY(const struct FVector& refAcceleration) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_SetAccelerationDir(const struct FVector& refAcceleration) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_RequestDirectVelocityZ(float InVelocityZ) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_RequestDirectVelocityXY(const struct FVector& refVelocity) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_RequestDirectVelocity(const struct FVector& refVelocity) {};

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool BP_IsRailSlideGoForword() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool BP_IsInnerWaterCurrent() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool BP_IsInnerWater() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool BP_IsConditionCheered() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	bool BP_IsAbilityEnable(ETresAbilityKind InAbilityKind) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	FVector BP_GetWaterCurrentForce() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	TEnumAsByte<ETresStateID> BP_GetTransitionStateID() { return ETresStateID::TSID_STATE_ACTION; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	int BP_GetRailSlideID() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	FVector BP_GetLastTakeDamageHitLocation() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	FVector BP_GetLastAttackHitLocation() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	TEnumAsByte<ETresWeaponType> BP_GetEquipWeaponType() { return ETresWeaponType::TRES_WEAPON_TYPE; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	TEnumAsByte<ETresItemDefWeapon> BP_GetEquipWeaponID() { return ETresItemDefWeapon::WEP_KEYBLADE00; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	TEnumAsByte<ETresDamageKind> BP_GetDamageStateDamageKind() { return ETresDamageKind::TRES_DMG_KIND_BEAT; };

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_EndCinematicLookAt(float BlendOut, EAlphaBlendOption InBlendOption) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_DisableSwimFluctuation(bool bDisable, float InInterpTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_DebugChangeWearform(ETresCharWearForm InForm, float InWearChangeTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_DebugAllAbilitySetDebugWork(int InLevel) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_DebugAbilitySetDebugWork(ETresAbilityKind InAbilityKind, int InLevel) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_CopyRootMotionVelocityToVelocity() {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_AnimStop(float InBlendOut, const FName& InSlotName) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_AnimPlaySequence(class UAnimSequenceBase* InAsset, const FName& InSlotNodeName, float InBlendInTime, bool InLoop, int InEffectGroup, float InPlayRate, bool InRootTrans, bool InRootRot, float InRootTransScaleXY, float InRootTransScaleZ) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_AnimPlayMontage(class UAnimMontage* InAsset, int InEffectGroup, float InPlayRate, float InRootTransScaleXY, float InRootTransScaleZ) {};

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	void BP_AnimPlayAnimset(const FName& InAnimName, const FName& InSlotNodeName, float InBlendInTime, bool InLoop, int InEffectGroup, float InPlayRate, bool InRootTrans, bool InRootRot, float InRootTransScaleXY, float InRootTransScaleZ, bool InSameCheck) {};

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	FName BP_AnimGetLastPlayAnimName(const FName& InSlotName) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	bool BP_AbilityRemove(ETresAbilityKind InAbilityKind) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	int BP_AbilityGetLevel(ETresAbilityKind InAbilityKind) { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresCharPawnBase")
	int BP_AbilityGetEquipNum(ETresAbilityKind InAbilityKind) { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	bool BP_AbilityAdd(ETresAbilityKind InAbilityKind, bool bEquip) { return false; };

	//UFUNCTION(BlueprintCallable, Category = "TresCharPawnBase")
	//void ApplyKBD(class USQEX_DynamicBindAssetUserData* KBDAssetUserData, const FName& ElementName, bool bIsReset, bool bIsResetPose, int PreRoll, bool KeepReferences) {};
};