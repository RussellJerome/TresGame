#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_SplineActor -FallbackName=SQEX_SplineActor
#include "ETresFNPC_AI_LeadMode.h"
#include "ETresFNPC_AI_LeadMoveType.h"
#include "UObject/NoExportTypes.h"
#include "ETresFNPC_AI_LeadFinish.h"
#include "ETresChrUniqueID.h"
#include "ETresFNPC_AI_LeadGoalAction.h"
#include "ETresFNPC_AI_LeadGoalWaitRelease.h"
#include "SQEX_SplineActor.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcAILeadFinishBySplineActorDelegate.h"
#include "TresNpcAILeadSplineActor.generated.h"

class AActor;

UCLASS()
class ATresNpcAILeadSplineActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bStartPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresFNPC_AI_LeadMode> m_Mode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresFNPC_AI_LeadMoveType> m_MoveType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_PredictionDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_LeadWaitEnterDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_LeadRestartDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor m_SplineColor;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool m_bReleaseDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ReleaseDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresFNPC_AI_LeadFinish> m_FinishTiming;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresFNPC_AI_LeadGoalAction> m_GoalAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresFNPC_AI_LeadGoalWaitRelease> m_GoalWaitReleaseType;
    
    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
    bool m_bGoalWaitReleaseDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_GoalWaitReleaseDistance;
    
    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
    bool m_bGoalWaitReleaseSplineTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_GoalWaitReleaseSplineTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bWaitEnterPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bChangeMoveType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresFNPC_AI_LeadMoveType> m_ChangeMoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bGoalTurn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_GoalTurnAngle;
    
    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
    bool m_bGoalLookAtCharaID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresChrUniqueID m_GoalLookAtCharaID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TWeakObjectPtr<AActor> m_GoalLookAtActor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector m_EQSItemOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_GoalDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FVector> m_SubLeadOffsets;
    
    UPROPERTY(BlueprintAssignable)
    FTresNpcAILeadFinishBySplineActor OnLeadFinish;
    
    ATresNpcAILeadSplineActor();
    UFUNCTION(BlueprintPure)
    bool IsGoalActor() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocationClosest(const FVector& InLocation) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLastPointLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetInputKeyClosestRatio(const FVector& InLocation) const;
    
    UFUNCTION(BlueprintPure)
    float GetInputKeyClosest(const FVector& InLocation) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDirectionClosest(const FVector& InLocation) const;
    
};

