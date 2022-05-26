#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "GameplayTask.h"
#include "MercunaMoveTaskCompletedSignatureDelegate.h"
#include "AITypes.h"
#include "EMercunaMoveResult.h"
#include "UObject/NoExportTypes.h"
#include "MercunaTask_MoveTo.generated.h"

class AActor;
class UMercunaTask_MoveTo;
class AAIController;

UCLASS()
class MERCUNA_API UMercunaTask_MoveTo : public UAITask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    UGameplayTask::FGenericGameplayTaskDelegate OnRequestFailed;
    
    UPROPERTY(BlueprintAssignable)
    FMercunaMoveTaskCompletedSignature OnMoveFinished;
    
public:
    UMercunaTask_MoveTo();
protected:
    UFUNCTION()
    void OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
public:
    UFUNCTION(BlueprintCallable)
    static UMercunaTask_MoveTo* MercunaMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float EndDistance, bool AcceptPartialPath, bool bLockAILogic);
    
};

