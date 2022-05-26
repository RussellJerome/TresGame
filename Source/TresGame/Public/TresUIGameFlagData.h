#pragma once
#include "CoreMinimal.h"
#include "TresUIGameFlagData.generated.h"

USTRUCT(BlueprintType)
struct FTresUIGameFlagData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName FlagName;
    
    UPROPERTY(EditDefaultsOnly)
    FName FlagLabelName;
    
    UPROPERTY(EditDefaultsOnly)
    bool bGameCleared;
    
    UPROPERTY(EditDefaultsOnly)
    bool bReMindCleared;
    
    TRESGAME_API FTresUIGameFlagData();
};

