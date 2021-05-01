// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresGame.h"
#include "TresAIPawnBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresAIPawnBase : public ATresCharPawnBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	class UBehaviorTree* MyAIBehavior;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	TArray<struct FTresBehaviorTreeInjectionData> m_DynamicAIBehavior;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	TArray<class UClass*> m_ActionDefinitions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	class UClass* m_DefaultAttackDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	class UClass* m_DefaultLocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	float m_BaseAttackCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	float m_AttackCooldownRandomDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	float m_HateAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	float m_HateRandomDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	float m_RageAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	float m_RageRandomDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	struct FGameplayTag m_AttackGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	bool bDebugDisplay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	bool m_Reincarnation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	bool m_bBPEM_IgnoreStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	class UClass* m_LocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	float m_AIBodyCollisionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	int m_MaxShieldHp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	float m_TurnLimitPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	float m_FixedPointTurnSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	bool m_bUseIdleMaxRotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	float m_IdleMaxRotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	bool m_bUseFixedTurnMaxRotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	float m_FixedTurnMaxRotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	TWeakObjectPtr<class UTresNpcSmartphoneCameraComponent> m_SmartphoneCameraComponentRef;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	//class UMercunaNavigationComponent* m_Navigation3DComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	bool m_bManualEditingObstacleComponent;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIPawnBase")
	//class UMercunaObstacleComponent* ObstacleComponent;

	UFUNCTION(BlueprintCallable, Category = "TresAIPawnBase")
	void SetRage(float inValue) {};

	UFUNCTION(BlueprintCallable, Category = "TresAIPawnBase")
	void SetAttackGroup(const struct FGameplayTag& inValue) {};

	//UFUNCTION(BlueprintCallable, Category = "TresAIPawnBase")
	//void OnMove3DCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<EMercunaMoveResult> Result) {};

	UFUNCTION(BlueprintCallable, Category = "TresAIPawnBase")
	void OnDtorStateEvent(TEnumAsByte<ETresStateID> inStateID) {};

	UFUNCTION(BlueprintCallable, Category = "TresAIPawnBase")
	void OnCtorStateEvent(TEnumAsByte<ETresStateID> inStateID) {};

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	bool IsSwimWaterSurface() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	bool IsSwimUnderWater() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	bool IsSwimming() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	bool IsPlayFieldVoice() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	bool IsNavigationBuildInProgress() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	bool IsHostileTarget() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	bool IsDamageReaction() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetWorldTime() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetTimeSinceAIStarted() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetTimeNotDamaged() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetTimeMoving() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetTimeMotionless() { return 0.0f; };

	//UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	//class UTresLocomotionDefinitionBase* GetStateToLocomotionDefinition() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetSpeedFromVelocity() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetRage() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	int GetPositionalRankingNotDuplicate() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	int GetPositionalRanking() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetLastAttackStartedTimestamp() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetLastAttackedTimestamp() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetElapsedTimeSinceLastDamaged() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetElapsedTimeSinceLastAttackStateStart() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetElapsedTimeSinceLastAttackStart() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetElapsedTimeSinceLastAttack() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetCurrentDuration() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetBattleTime() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	struct FGameplayTag GetAttackGroup() { return FGameplayTag::FGameplayTag(); };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetAttackCooldownRemaining() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetAttackCooldown() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAIPawnBase")
	float GetAIRunningTime() { return 0.0f; };

	UFUNCTION(BlueprintCallable, Category = "TresAIPawnBase")
	bool DebugAISwimming(const FVector& Dirc, float Power, float Speed) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresAIPawnBase")
	bool DebugAIMove(const FVector& Dirc, float Power) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresAIPawnBase")
	bool DebugAIJump(float JumpPower) { return false; };

	//UFUNCTION(BlueprintCallable, Category = "TresAIPawnBase")
	//void BP_OnRunBehaviorTree() {};
	
};
