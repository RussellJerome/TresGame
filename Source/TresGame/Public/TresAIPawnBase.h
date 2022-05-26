#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCharPawnBase.h"
#include "GameplayTagContainer.h"
#include "TresBehaviorTreeInjectionData.h"
#include "UObject/NoExportTypes.h"
#include "AITypes.h"
#include "EMercunaMoveResult.h"
#include "ETresStateID.h"
#include "TresAIPawnBase.generated.h"

class UMercunaNavigationComponent;
class UTresAttackDefinitionBase;
class UBehaviorTree;
class UTresLocomotionDefinitionBase;
class UTresActionDefinitionBase;
class UTresNpcSmartphoneCameraComponent;
class UMercunaObstacleComponent;

UCLASS(Abstract)
class ATresAIPawnBase : public ATresCharPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBehaviorTree* MyAIBehavior;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresBehaviorTreeInjectionData> m_DynamicAIBehavior;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UTresActionDefinitionBase>> m_ActionDefinitions;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresAttackDefinitionBase> m_DefaultAttackDefinition;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_DefaultLocomotionDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BaseAttackCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AttackCooldownRandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_HateAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_HateRandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RageRandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_AttackGroup;
    
    UPROPERTY(EditInstanceOnly)
    bool bDebugDisplay;
    
    UPROPERTY(Transient)
    bool m_Reincarnation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool m_bBPEM_IgnoreStatus;
    
protected:
    UPROPERTY(Transient)
    TSubclassOf<UTresLocomotionDefinitionBase> m_LocomotionDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AIBodyCollisionRadius;
    
    UPROPERTY(EditAnywhere)
    int32 m_MaxShieldHp;
    
    UPROPERTY(EditAnywhere)
    float m_TurnLimitPitch;
    
    UPROPERTY(EditAnywhere)
    float m_FixedPointTurnSpeed;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseIdleMaxRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_IdleMaxRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseFixedTurnMaxRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_FixedTurnMaxRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, Export)
    TWeakObjectPtr<UTresNpcSmartphoneCameraComponent> m_SmartphoneCameraComponentRef;
    
private:
    UPROPERTY(Export, VisibleDefaultsOnly)
    UMercunaNavigationComponent* m_Navigation3DComponent;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool m_bManualEditingObstacleComponent;
    
    UPROPERTY(EditAnywhere, Export)
    UMercunaObstacleComponent* ObstacleComponent;
    
public:
    ATresAIPawnBase();
    UFUNCTION(BlueprintCallable)
    void SetRage(float inValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackGroup(FGameplayTag inValue);
    
protected:
    UFUNCTION()
    void OnMove3DCompleted(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
public:
    UFUNCTION()
    void OnDtorStateEvent(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION()
    void OnCtorStateEvent(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION(BlueprintPure)
    bool IsSwimWaterSurface() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSwimUnderWater() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSwimming() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayFieldVoice();
    
    UFUNCTION(Exec)
    bool IsNavigationBuildInProgress() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHostileTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDamageReaction() const;
    
    UFUNCTION(BlueprintPure)
    float GetWorldTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeSinceAIStarted() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeNotDamaged() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTimeMoving();
    
    UFUNCTION(BlueprintCallable)
    float GetTimeMotionless();
    
    UFUNCTION(BlueprintPure)
    UTresLocomotionDefinitionBase* GetStateToLocomotionDefinition() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpeedFromVelocity() const;
    
    UFUNCTION(BlueprintPure)
    float GetRage() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPositionalRankingNotDuplicate() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPositionalRanking() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastAttackStartedTimestamp() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastAttackedTimestamp() const;
    
    UFUNCTION(BlueprintPure)
    float GetElapsedTimeSinceLastDamaged() const;
    
    UFUNCTION(BlueprintPure)
    float GetElapsedTimeSinceLastAttackStateStart() const;
    
    UFUNCTION(BlueprintPure)
    float GetElapsedTimeSinceLastAttackStart() const;
    
    UFUNCTION(BlueprintPure)
    float GetElapsedTimeSinceLastAttack() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetBattleTime() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetAttackGroup() const;
    
    UFUNCTION(BlueprintPure)
    float GetAttackCooldownRemaining() const;
    
    UFUNCTION(BlueprintPure)
    float GetAttackCooldown() const;
    
    UFUNCTION(BlueprintPure)
    float GetAIRunningTime() const;
    
    UFUNCTION(BlueprintCallable)
    bool DebugAISwimming(FVector Dirc, float Power, float Speed);
    
    UFUNCTION(BlueprintCallable)
    bool DebugAIMove(FVector Dirc, float Power);
    
    UFUNCTION(BlueprintCallable)
    bool DebugAIJump(float JumpPower);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnRunBehaviorTree();
    
};

