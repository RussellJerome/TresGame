#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "TresGameplayTagDebugColor.generated.h"

USTRUCT(BlueprintType)
struct FTresGameplayTagDebugColor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag GameplayTag;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor Color;
    
    TRESGAME_API FTresGameplayTagDebugColor();
};

