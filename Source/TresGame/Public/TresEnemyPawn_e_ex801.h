#pragma once
#include "CoreMinimal.h"
#include "TresEnemyToyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex801.generated.h"

class AActor;

UCLASS()
class ATresEnemyPawn_e_ex801 : public ATresEnemyToyPawnBase {
    GENERATED_BODY()
public:
    ATresEnemyPawn_e_ex801();
    UFUNCTION(BlueprintCallable)
    void PostAnimUpdate();
    
    UFUNCTION(BlueprintPure)
    FVector GetPlasmaTargetFloorLocation() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetPlasmaTarget() const;
    
    UFUNCTION(BlueprintPure)
    void GetPlasmaLocationList(TArray<FVector>& OutList) const;
    
};

