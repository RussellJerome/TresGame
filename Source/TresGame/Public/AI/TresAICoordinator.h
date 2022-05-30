#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresTeamDebugColor.h"
#include "GameplayTagContainer.h"
#include "TresGameplayTagDebugColor.h"
#include "TresAI_BPEM_NotificationStartAIAttackLogInfoDelegate.h"
#include "TresAI_BPEM_NotificationStartAttackLogInfoDelegate.h"
#include "TresAI_BPEM_NotificationTakeDamageLogInfoDelegate.h"
#include "ETresTeam.h"
#include "TresAI_BPEM_NotificationAttackHitInvincibleCharLogInfoDelegate.h"
#include "TresAI_BPEM_NotificationRecoveryHpMpFpLogInfoDelegate.h"
#include "TresAI_BPEM_NotificationCtorStateLogInfoDelegate.h"
#include "TresAI_BPEM_NotificationDtorStateLogInfoDelegate.h"
#include "UObject/NoExportTypes.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "TresAICoordinator.generated.h"

class UTresAttackPermissionManager;
class UCurveVector;
class UTresNpcMetaAI;
class UTresBattlePlayerEmotionManager;
class UTresCoopManager;
class UEnvQuery;
class ATresAICoordinator;
class UObject;

UCLASS()
class ATresAICoordinator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UTresAttackPermissionManager>> AttackPermissionManagers;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* PostAttackerAssignedCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* PostTargetAttackedCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresGameplayTagDebugColor> AttackGroupDebugColors;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresTeamDebugColor> TargetDebugColors;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool EnableDebugDraw;
    
    UPROPERTY(EditInstanceOnly)
    bool EnableCoopDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FGameplayTag AttackGroupDebugDraw;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresNpcMetaAI> FriendNpcMetaAIClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresBattlePlayerEmotionManager> BattlePlayerEmotionManagerClass;
    
    UPROPERTY(BlueprintAssignable)
    FTresAI_BPEM_NotificationStartAIAttackLogInfo OnNotificationStartAIAttackLogInfo;
    
    UPROPERTY(BlueprintAssignable)
    FTresAI_BPEM_NotificationStartAttackLogInfo OnNotificationStartAttackLogInfo;
    
    UPROPERTY(BlueprintAssignable)
    FTresAI_BPEM_NotificationTakeDamageLogInfo OnNotificationTakeDamageLogInfo;
    
    UPROPERTY(BlueprintAssignable)
    FTresAI_BPEM_NotificationAttackHitInvincibleCharLogInfo OnNotificationAttackHitInvincibleCharLogInfo;
    
    UPROPERTY(BlueprintAssignable)
    FTresAI_BPEM_NotificationRecoveryHpMpFpLogInfo OnNotificationRecoveryHpMpFpLogInfo;
    
    UPROPERTY(BlueprintAssignable)
    FTresAI_BPEM_NotificationCtorStateLogInfo OnNotificationCtorStateLogInfo;
    
    UPROPERTY(BlueprintAssignable)
    FTresAI_BPEM_NotificationDtorStateLogInfo OnNotificationDtorStateLogInfo;
    
private:
    UPROPERTY()
    TArray<UTresAttackPermissionManager*> m_AttackPermissionManagers;
    
    UPROPERTY(Transient)
    UTresCoopManager* m_CoopManager;
    
    UPROPERTY(Export)
    UTresNpcMetaAI* m_FriendNpcMetaAI;
    
    UPROPERTY(Export)
    UTresBattlePlayerEmotionManager* m_BattlePlayerEmotionManager;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* GoalRankingQuery;
    
public:
    ATresAICoordinator();
    UFUNCTION(BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintPure)
    static ATresAICoordinator* GetTresAICoordinator(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    void GetTargetableActorsWithAffiliation(TArray<AActor*>& outResult, const AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPositionalRankingNotDuplicate(const AActor* inSourceActor, const AActor* inTargetedActor) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPositionalRanking(const AActor* inSourceActor, const AActor* inTargetedActor) const;
    
    UFUNCTION(BlueprintPure)
    void GetPlayerFaction(TArray<AActor*>& outResult) const;
    
    UFUNCTION(BlueprintPure)
    void GetNeutralFaction(TArray<AActor*>& outResult) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMemberCountWithAffiliation(const AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude, bool IncludingReserve) const;
    
    UFUNCTION(BlueprintPure)
    UTresNpcMetaAI* GetFriendNpcMetaAI() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetFactionColor(AActor* InTarget) const;
    
    UFUNCTION(BlueprintPure)
    void GetEnemyFaction(TArray<AActor*>& outResult) const;
    
    UFUNCTION(BlueprintPure)
    void GetDestinationsWithAffiliation(TArray<FVector>& outResult, AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude) const;
    
    UFUNCTION(BlueprintPure)
    UTresCoopManager* GetCoopManager() const;
    
    UFUNCTION(BlueprintPure)
    UTresBattlePlayerEmotionManager* GetBattlePlayerEmotionManager() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetAttackGroupColor(AActor* inAttacker) const;
    
    UFUNCTION(BlueprintCallable)
    float GetAssigmentCooldownRemainingTicket(const AActor* inTargetedActor, FGameplayTag AttackerGroup);
    
    UFUNCTION(BlueprintCallable)
    float GetAssigmentCooldownRemaining(const AActor* inTargetedActor, FGameplayTag AttackerGroup);
    
    UFUNCTION(BlueprintPure)
    void GetAlliesInAttackGroup(TArray<AActor*>& outResult, const AActor* inSourceActor, FGameplayTag AttackerGroup) const;
    
    UFUNCTION(BlueprintPure)
    void GetActorsWithTeamID(TArray<AActor*>& outResult, TEnumAsByte<ETresTeam::Type> inTeamID) const;
    
    UFUNCTION(BlueprintPure)
    void GetActorsWithAffiliationAll(TArray<AActor*>& outResult, const AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude) const;
    
    UFUNCTION(BlueprintPure)
    void GetActorsWithAffiliation(TArray<AActor*>& outResult, const AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude) const;
    
    UFUNCTION(BlueprintCallable)
    void BP_AssignAttackers(TArray<AActor*> inSourceActors);
    
};

