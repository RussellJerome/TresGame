#pragma once
#include "CoreMinimal.h"
#include "TresAIController_BT.h"
#include "TresNpcAILeadFinishDelegate.h"
#include "TresNpcAILeadEndDelegate.h"
#include "ETresChrUniqueID.h"
#include "ETresFNpcAINpcMode.h"
#include "ETresFNpcAIStyle_Battle.h"
#include "TresNpcControllerBase.generated.h"

class ATresNpcAILeadSplineActor;
class UTresNpcAILeadSplineController;
class UTresNpcAIBattleController;
class AActor;
class UBehaviorTree;
class UBlackboardComponent;

UCLASS()
class ATresNpcControllerBase : public ATresAIController_BT {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTresNpcAILeadFinish OnLeadFinish;
    
    UPROPERTY(BlueprintAssignable)
    FTresNpcAILeadEnd OnLeadEnd;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ETresChrUniqueID m_ChrUniqueID;
    
    UPROPERTY(Export)
    UTresNpcAILeadSplineController* m_LeadSplineController;
    
    UPROPERTY(Export)
    UTresNpcAIBattleController* m_BattleController;
    
public:
    ATresNpcControllerBase();
    UFUNCTION(BlueprintCallable)
    void StartNpcMode(ETresFNpcAINpcMode InNpcMode, FName InCancelEventName);
    
    UFUNCTION(BlueprintCallable)
    void StartLeadSub(int32 InIndex, AActor* InLeader, ATresNpcAILeadSplineActor* InLeadSplineActor, FName InLeadID);
    
    UFUNCTION(BlueprintCallable)
    void StartLead(AActor* InLeadSplineActor, FName InLeadID, FName InCancelEventName);
    
    UFUNCTION(BlueprintCallable)
    void StartGimmickWaitAI();
    
    UFUNCTION(BlueprintCallable)
    void SetNpcModeWalk(bool bWalk);
    
    UFUNCTION(BlueprintCallable)
    bool RunBehaviorTree(UBehaviorTree* BTAsset);
    
    UFUNCTION(BlueprintCallable)
    void ResetCancelEventName();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerBeingAttackedByEnemy() const;
    
    UFUNCTION(BlueprintPure)
    bool IsNpcModeWalk() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLeadSub() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLeadMoveTypeToRun() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLeadLeaderWaiting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLeadGoal() const;
    
    UFUNCTION(BlueprintPure)
    UTresNpcAILeadSplineController* GetLeadSplineController() const;
    
    UFUNCTION(BlueprintPure)
    ETresFNpcAINpcMode GetCurrentNpcModeType() const;
    
    UFUNCTION(BlueprintPure)
    UBlackboardComponent* GetBlackboardComponent();
    
    UFUNCTION(BlueprintPure)
    UTresNpcAIBattleController* GetBattleController() const;
    
    UFUNCTION(BlueprintCallable)
    void EndGimmickWaitAI();
    
    UFUNCTION(BlueprintCallable)
    void DEBUG_SetNpcAIStyle_Battle(ETresFNpcAIStyle_Battle InNpcAIStyle_Battle);
    
    UFUNCTION(BlueprintPure)
    bool CanNpcMode() const;
    
    UFUNCTION(BlueprintPure)
    bool CanLeadWait() const;
    
    UFUNCTION(BlueprintPure)
    bool CanLead() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelNpcMode(bool bCallCancelEvent);
    
    UFUNCTION(BlueprintCallable)
    void CancelLead();
    
    UFUNCTION(BlueprintPure)
    bool CanbeSwirlUpDamageReactionByEnemy() const;
    
};

