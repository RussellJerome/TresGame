#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresRemunerationData.h"
#include "TresRemunerationStatics.generated.h"

class UTresRemunerationAsset;

UCLASS(BlueprintType)
class TRESGAME_API UTresRemunerationStatics : public UObject {
    GENERATED_BODY()
public:
    UTresRemunerationStatics();
    UFUNCTION(BlueprintCallable)
    static UTresRemunerationAsset* LoadRemunerationData();
    
    UFUNCTION(BlueprintCallable)
    static FTresRemunerationData GetRemunerationData(const FString& Key);
    
};

