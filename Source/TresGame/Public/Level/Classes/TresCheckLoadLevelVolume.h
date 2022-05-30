#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresCheckLoadLevelVolume.generated.h"

UCLASS()
class ATresCheckLoadLevelVolume : public ATresVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FString> CheckLevelNameArray;
    
public:
    ATresCheckLoadLevelVolume();
    UFUNCTION()
    void SelectLevelFromList();
    
    UFUNCTION()
    void AutoSetFromSelect();
    
};

