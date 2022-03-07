// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GenericTeamAgentInterface.h"
#include "TresGame.h"
#include "TresAICoordinator.generated.h"

//These Delegates may not be correct!
DECLARE_MULTICAST_DELEGATE(OnNotificationStartAIAttackLogInfo);
DECLARE_MULTICAST_DELEGATE(OnNotificationStartAttackLogInfo);
DECLARE_MULTICAST_DELEGATE(OnNotificationTakeDamageLogInfo);
DECLARE_MULTICAST_DELEGATE(OnNotificationAttackHitInvincibleCharLogInfo);
DECLARE_MULTICAST_DELEGATE(OnNotificationRecoveryHpMpFpLogInfo);
DECLARE_MULTICAST_DELEGATE(OnNotificationCtorStateLogInfo);
DECLARE_MULTICAST_DELEGATE(OnNotificationDtorStateLogInfo);

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	TArray<struct FTresGameplayTagDebugColor> AttackGroupDebugColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICoordinator")
	TArray<struct FTresTeamDebugColor> TargetDebugColors;

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

	//UPROPERTY(BlueprintAssignable, Category = "TresAccompanyPawnBase")
	//FTresNotificationStartAIAttackLogInfo OnNotificationStartAIAttackLogInfo;
	
	//UPROPERTY(BlueprintAssignable, Category = "TresAccompanyPawnBase")
	//FTresNotificationStartAttackLogInfo OnNotificationStartAttackLogInfo;
	
	//UPROPERTY(BlueprintAssignable, Category = "TresAccompanyPawnBase")
	//FTresNotificationTakeDamageLogInfo OnNotificationTakeDamageLogInfo;
	
	//UPROPERTY(BlueprintAssignable, Category = "TresAccompanyPawnBase")
	//FTresNotificationAttackHitInvincibleCharLogInfo OnNotificationAttackHitInvincibleCharLogInfo;
	
	//UPROPERTY(BlueprintAssignable, Category = "TresAccompanyPawnBase")
	//FTresNotificationRecoveryHpMpFpLogInfo OnNotificationRecoveryHpMpFpLogInfo;
	
	//UPROPERTY(BlueprintAssignable, Category = "TresAccompanyPawnBase")
	//FTresNotificationCtorStateLogInfo OnNotificationCtorStateLogInfo;
	
	//UPROPERTY(BlueprintAssignable, Category = "TresAccompanyPawnBase")
	//FTresNotificationDtorStateLogInfo OnNotificationDtorStateLogInfo;

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

	//UFUNCTION(BlueprintPure, Category = "TresAICoordinator", meta = (WorldContext = "WorldContext"))
	//static class ATresAICoordinator* GetTresAICoordinator(class UObject* WorldContext) { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	void GetTargetableActorsWithAffiliation(class AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude, TArray<class AActor*>& outResult) {};

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	int GetPositionalRankingNotDuplicate(class AActor* inSourceActor, class AActor* inTargetedActor) { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	int GetPositionalRanking(class AActor* inSourceActor, class AActor* inTargetedActor) { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	void GetPlayerFaction(TArray<class AActor*>& outResult) {};

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	void GetNeutralFaction(TArray<class AActor*>& outResult) {};

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	int GetMemberCountWithAffiliation(class AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude, bool IncludingReserve) { return 0; };

	//UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	//class UTresNpcMetaAI* GetFriendNpcMetaAI() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	FLinearColor GetFactionColor(class AActor* InTarget) { return FLinearColor::FLinearColor(); };

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	void GetEnemyFaction(TArray<class AActor*>& outResult) {};

	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	void GetDestinationsWithAffiliation(class AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude, TArray<struct FVector>& outResult) {};

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
	
	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	void GetActorsWithAffiliationAll(class AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude, TArray<class AActor*>& outResult) {};
	
	UFUNCTION(BlueprintPure, Category = "TresAICoordinator")
	void GetActorsWithAffiliation(class AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude, TArray<class AActor*>& outResult) {};

	UFUNCTION(BlueprintCallable, Category = "TresAICoordinator")
	void BP_AssignAttackers(TArray<class AActor*> inSourceActors) {};
};
