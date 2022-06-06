#pragma once
#include "CoreMinimal.h"
#include "TresUIGameFlagData.h"
#include "TresUIGameFlagText.generated.h"

USTRUCT(BlueprintType)
struct FTresUIGameFlagText {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString TextId;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagData GameFlag;
    
    TRESGAME_API FTresUIGameFlagText();
};

