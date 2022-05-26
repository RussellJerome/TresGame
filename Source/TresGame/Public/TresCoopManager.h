#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "TresCoopManager.generated.h"

class AActor;
class ATresAIPawnBase;

UCLASS(BlueprintType)
class UTresCoopManager : public UObject {
    GENERATED_BODY()
public:
    UTresCoopManager();
    UFUNCTION(BlueprintPure)
    bool IsValidMemberID(int32 TeamID, int32 MemberID) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxMemberID(int32 TeamID) const;
    
    UFUNCTION(BlueprintPure)
    void GetLocationsForFormation(TArray<FVector>& outResult, AActor* inQuerier) const;
    
    UFUNCTION(BlueprintPure)
    void GetDestinations(TArray<FVector>& outResult, AActor* inQuerier) const;
    
    UFUNCTION(BlueprintPure)
    ATresAIPawnBase* GetAIPawnBase(int32 TeamID, int32 MemberID) const;
    
    UFUNCTION(BlueprintPure)
    void GetActors(TArray<AActor*>& outResult, AActor* inQuerier) const;
    
    UFUNCTION(BlueprintCallable)
    void Abort(int32 TeamID, int32 MemberID);
    
};

