#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETresChrUniqueID.h"
#include "TresNpcAICombiData.h"
#include "ETresFNpcAINpcMode.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcMetaAI.generated.h"

class AActor;
class ATresNpcAILeadSplineActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresNpcMetaAI : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresNpcAICombiData> m_CombiDataList;
    
    UTresNpcMetaAI();
    UFUNCTION(BlueprintCallable)
    bool StartPrecedeMovement(ETresChrUniqueID InApplyChrID, AActor* InDestination, float InGridSize, float InSpaceBetween);
    
    UFUNCTION(BlueprintCallable)
    void StartNpcMode(ETresChrUniqueID InApplyChrID, ETresFNpcAINpcMode InNpcMode, FName InCancelEventName);
    
    UFUNCTION(BlueprintCallable)
    void StartLead(FName InLeadID, ETresChrUniqueID InApplyChrID, ATresNpcAILeadSplineActor* InLeadSplineActor, TArray<ETresChrUniqueID> InSubLeadCharaSlotList, FName InCancelEventName);
    
    UFUNCTION(BlueprintPure)
    void GetLeadWayPointList(TArray<FVector>& outResult, const AActor* inSourceActor);
    
    UFUNCTION(BlueprintCallable)
    void CancelPrecedeMovement(ETresChrUniqueID InApplyChrID);
    
    UFUNCTION(BlueprintCallable)
    void CancelNpcMode(ETresChrUniqueID InApplyChrID);
    
    UFUNCTION(BlueprintCallable)
    void CancelLead(ETresChrUniqueID InApplyChrID);
    
    UFUNCTION(BlueprintCallable)
    void CancelAIModeAll(ETresChrUniqueID InApplyChrID);
    
};

