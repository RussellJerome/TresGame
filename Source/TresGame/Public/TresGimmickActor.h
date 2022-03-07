// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGame.h"
#include "TresGimmickActor.generated.h"

UCLASS()
class TRESGAME_API ATresGimmickActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bAutoActivate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bGimmickComponentAutoLinkActivate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bIsActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bChangeAtkCollisionChannelWhenHidden;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bUseBlueprintEventByChangeAtkCollisionChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	class UTresChrDataTableSet* m_pDataTableSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	class UTresChrBaseParam* m_BaseParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	ETresEnemyUniqueID m_FakeEnemyUniqueID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	int m_TeamNo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_UseChangeGimmickActionNotify;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bEnableGimmickControl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bAutoStartGimmick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bAutoStartShowGimmick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bDefaultShowGimmick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bWithoutMyMeshShowGimmick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bAutoStartEnableCollisionGimmick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bDefaultEnableCollisionGimmick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bWithoutMyMeshCollisionGimmick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	FName m_DefaultCollisionGimmickProfile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bAutoDestoryGimmick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	float m_AutoDestoryDelayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bAutoDestoryHideGimmick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	float m_AutoDestoryHideDelayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bAutoDestoryDisableCollisionGimmick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bEnableDestroyedReaction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bEnableDestroyedReflection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bAutoStartActiveGimmick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bBeginPlayDisableTickRegister;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bUseGimmickPause;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bUseGimmickPauseDisableTick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bUseGimmickInstanceManage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	bool m_bAttackGimmick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	class UParticleSystem* m_Effect_GimmickDestroy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	FName m_Effect_GimmickDestroyAttachPoint;

	/*struct FScriptMulticastDelegate OnTresTakeDamage;
	struct FScriptMulticastDelegate OnGimmickDoCommand; 
	struct FScriptMulticastDelegate OnGimmickActivate;
	struct FScriptMulticastDelegate OnStartGimmickForPlan;
	struct FScriptMulticastDelegate OnStopGimmickForPlan;
	struct FScriptMulticastDelegate OnDestroyedGimmickForPlan;
	struct FScriptMulticastDelegate OnBeginPauseSpecialForPlan;
	struct FScriptMulticastDelegate OnEndPauseSpecialForPlan;
	struct FScriptMulticastDelegate OnGimmickInstanceInitialize;
	struct FScriptMulticastDelegate OnReactorDoCommand;
	struct FScriptMulticastDelegate OnGimmickBeginActorRide;
	struct FScriptMulticastDelegate OnGimmickEndActorRide;
	struct FScriptMulticastDelegate OnGimmickChangeActorRideBone;
	struct FScriptMulticastDelegate OnGimmickKilledChar;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickActor")
	FName m_FoodstuffKeyName;

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void SetPowerSavingMode(bool mode, class UObject* who) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void RequestStopGimmickForPlan(bool PlayAnimation) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void RequestStartGimmickForPlan(bool PlayAnimation) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void RequestShowGimmickForPlan() {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void RequestResetGimmickForPlan() {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void RequestHideGimmickForPlan() {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void RequestForceStopedGimmickForPlan() {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void RequestForceStartedGimmickForPlan() {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void RequestForceDestroyedGimmickForPlan() {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void RequestEnableCollisionGimmickForPlan() {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void RequestDisableCollisionGimmickForPlan() {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void RequestDestroyGimmickForPlan(bool PlayAnimation) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void ReceiveTresTakeDamage(float DamagePoint, class AController* InstigatedBy, const struct FHitResult& HitInfo, const struct FTresDamageInfo& DamageInfo, const FVector& ShotFromDirection, class AActor* DamageCauser) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void ReceiveGimmickKilledCharSignature(class ATresGimmickActor* AttackCauser, class ATresPawnBase* KilledPawn, const struct FTresDamageInfo& DamageInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void ReceiveGimmickEndActorRide(class AActor* RideActor, class UPrimitiveComponent* Component, const FName& BoneName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void ReceiveGimmickDoCommand(class ATresCharPawnBase* InCommandCauser, TEnumAsByte<ETresCommandKind> InCommandID) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void ReceiveGimmickChangeActorRideBone(class AActor* RideActor, class UPrimitiveComponent* Component, const FName& BoneName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void ReceiveGimmickBeginActorRide(class AActor* RideActor, class UPrimitiveComponent* Component, const FName& BoneName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void ReceiveGimmickActivate(bool bEnable) {};

	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickActor")
	void OnChangeGimmickPauseCallBack(bool bPause);

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void NotifyChangeGimmickActionImpl(bool bShow) {};

	UFUNCTION(BlueprintPure, Category = "TresGimmickActor")
	bool IsPowerSavingMode() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGimmickActor")
	class UMeshComponent* GetMeshComponentForPlan() { return nullptr; };

	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickActor")
	void BPEV_OnStopGimmickForPlan(bool PlayAnimation);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickActor")
	void BPEV_OnStartGimmickForPlan(bool PlayAnimation);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickActor")
	void BPEV_OnShowGimmickForPlan();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickActor")
	void BPEV_OnResetGimmickForPlan();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickActor")
	void BPEV_OnHideGimmickForPlan();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickActor")
	void BPEV_OnGimmickInstanceInitialize(ETresGimmickInstanceManagerInstanceState State, ETresGimmickInstanceManagerInstanceState OldState);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickActor")
	void BPEV_OnFlashGimmickForPlan();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickActor")
	void BPEV_OnEndPauseSpecialForPlan();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickActor")
	void BPEV_OnEnableCollisionGimmickForPlan();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickActor")
	void BPEV_OnDisableCollisionGimmickForPlan();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickActor")
	void BPEV_OnDestroyedGimmickForPlan(bool PlayAnimation);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickActor")
	void BPEV_OnBeginPauseSpecialForPlan();

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void BPEV_ChangePowerSavingMode(bool isSaving, class UObject* who) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void BPE_ChangeCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> Response) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void BP_SetTeamNo(int InTeamNo) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void BP_SetEnableFocusPointForPlan(bool Enable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void BP_ManagedTick(float DeltaSeconds) {};

	UFUNCTION(BlueprintPure, Category = "TresGimmickActor")
	bool BP_IsStartGimmickForPlan() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGimmickActor")
	bool BP_IsShowedGimmickForPlan() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGimmickActor")
	bool BP_IsGimmickActive() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGimmickActor")
	bool BP_IsEnabledCollisionGimmickForPlan() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGimmickActor")
	bool BP_IsDestroyedGimmickForPlan() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void BP_IgnoreActorWhenMovingAll(class AActor* Actor, bool bShouldIgnore) {};

	UFUNCTION(BlueprintPure, Category = "TresGimmickActor")
	int BP_GetTeamNo() { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void BP_GetFoodstuffPrizeToTeam() {};

	UFUNCTION(BlueprintPure, Category = "TresGimmickActor")
	FName BP_GetFoodstuffDropDataKeyName() { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void BP_EnableGimmickAttackCollision(const FName& InGroupName, float InAttackInterval) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void BP_DistanceBetweenPlayer(ETresGimmickDistanceBetweenPlayer Type) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void BP_DisableGimmickAttackCollision(const FName& InGroupName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void BP_DeactivateGimmickComponentAll() {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void BP_DeactivateGimmick() {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void BP_ActivateGimmickComponentAll() {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickActor")
	void BP_ActivateGimmick() {};
};
