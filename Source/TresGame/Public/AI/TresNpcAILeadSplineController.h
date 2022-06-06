#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcAILeadSplineController.generated.h"

class AActor;
class ATresNpcAILeadSplineActor;
class ATresNpcPawnBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresNpcAILeadSplineController : public UActorComponent {
    GENERATED_BODY()
public:
    UTresNpcAILeadSplineController();
    UFUNCTION(BlueprintCallable)
    void SetLeadSub(int32 InIndex, AActor* InLeader, ATresNpcAILeadSplineActor* InLeadSplineActor, FName InLeadID);
    
    UFUNCTION(BlueprintCallable)
    void SetLeadSplineActor(AActor* InLeadSplineActor, FName InLeadID, FName InCancelEventName);
    
protected:
    UFUNCTION()
    void OnLeadSubFinishFunc(FName ID);
    
    UFUNCTION()
    void OnLeadSubEndFunc(FName ID);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLeadSub() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLeaderWaiting() const;
    
    UFUNCTION(BlueprintPure)
    bool HasLeadSplineActor() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLeadSubOffset() const;
    
    UFUNCTION(BlueprintPure)
    ATresNpcAILeadSplineActor* GetLeadSplineActorGoal() const;
    
    UFUNCTION(BlueprintPure)
    ATresNpcAILeadSplineActor* GetLeadSplineActor() const;
    
    UFUNCTION(BlueprintPure)
    ATresNpcPawnBase* GetLeadLeader() const;
    
    UFUNCTION(BlueprintPure)
    FName GetLeadID() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCharaClosestLocation() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetBaseWayPointRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBaseWayPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

