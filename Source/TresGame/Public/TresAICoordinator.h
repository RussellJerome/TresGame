// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGame_StructsAndEnums.h"
#include "TresAICoordinator.generated.h"

UCLASS()
class TRESGAME_API ATresAICoordinator : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	TArray<class UClass*> AttackPermissionManagers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	class UCurveVector* PostAttackerAssignedCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	class UCurveVector* PostTargetAttackedCooldown;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	//TArray<struct FTresGameplayTagDebugColor> AttackGroupDebugColors;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	//TArray<struct FTresTeamDebugColor> TargetDebugColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	bool EnableDebugDraw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	bool EnableCoopDebugDraw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	FGameplayTag AttackGroupDebugDraw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	class UClass* FriendNpcMetaAIClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	class UClass* BattlePlayerEmotionManagerClass;

	/*struct FScriptMulticastDelegate OnNotificationStartAIAttackLogInfo;
	struct FScriptMulticastDelegate OnNotificationStartAttackLogInfo;
	struct FScriptMulticastDelegate OnNotificationTakeDamageLogInfo;
	struct FScriptMulticastDelegate OnNotificationAttackHitInvincibleCharLogInfo;
	struct FScriptMulticastDelegate OnNotificationRecoveryHpMpFpLogInfo;
	struct FScriptMulticastDelegate OnNotificationCtorStateLogInfo;
	struct FScriptMulticastDelegate OnNotificationDtorStateLogInfo;*/

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	//TArray<class UTresAttackPermissionManager*> m_AttackPermissionManagers;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	//class UTresCoopManager* m_CoopManager;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	//class UTresNpcMetaAI* m_FriendNpcMetaAI;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	//class UTresBattlePlayerEmotionManager* m_BattlePlayerEmotionManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	class UEnvQuery* GoalRankingQuery;

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	bool IsSelected() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator", meta = (WorldContext = "WorldContext"))
	static class ATresAICoordinator* GetTresAICoordinator(class UObject* WorldContext) { return nullptr; };

	//void GetTargetableActorsWithAffiliation(class AActor* inSourceActor, TEnumAsByte<ETeamAttitude> inTeamAttitude, TArray<class AActor*>* outResult) {};

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	int GetPositionalRankingNotDuplicate(class AActor* inSourceActor, class AActor* inTargetedActor) { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	int GetPositionalRanking(class AActor* inSourceActor, class AActor* inTargetedActor) { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	void GetPlayerFaction(TArray<class AActor*>& outResult) {};

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	void GetNeutralFaction(TArray<class AActor*>& outResult) {};

	//int GetMemberCountWithAffiliation(class AActor* inSourceActor, TEnumAsByte<ETeamAttitude> inTeamAttitude, bool IncludingReserve) { return 0; };

	//UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	//class UTresNpcMetaAI* GetFriendNpcMetaAI() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	FLinearColor GetFactionColor(class AActor* InTarget) { return FLinearColor::FLinearColor(); };

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	void GetEnemyFaction(TArray<class AActor*>& outResult) {};

	//void GetDestinationsWithAffiliation(class AActor* inSourceActor, TEnumAsByte<ETeamAttitude> inTeamAttitude, TArray<struct FVector>* outResult) {};

	//UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	//class UTresCoopManager* GetCoopManager() {};

	//UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	//class UTresBattlePlayerEmotionManager* GetBattlePlayerEmotionManager() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	FLinearColor GetAttackGroupColor(class AActor* inAttacker) { return FLinearColor::FLinearColor(); };

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	float GetAssigmentCooldownRemainingTicket(class AActor* inTargetedActor, const FGameplayTag& AttackerGroup) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	float GetAssigmentCooldownRemaining(class AActor* inTargetedActor, const FGameplayTag& AttackerGroup) { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	void GetAlliesInAttackGroup(class AActor* inSourceActor, const FGameplayTag& AttackerGroup, TArray<class AActor*>& outResult) {};

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	void GetActorsWithTeamID(TEnumAsByte<ETresTeam> inTeamID, TArray<class AActor*>& outResult) {};
	//void GetActorsWithAffiliationAll(class AActor* inSourceActor, TEnumAsByte<ETeamAttitude> inTeamAttitude, TArray<class AActor*>* outResult) {};
	//void GetActorsWithAffiliation(class AActor* inSourceActor, TEnumAsByte<ETeamAttitude> inTeamAttitude, TArray<class AActor*>* outResult) {};

	UFUNCTION(BlueprintCallable, Category = "TresAICoordinator")
	void BP_AssignAttackers(TArray<class AActor*> inSourceActors) {};
};
