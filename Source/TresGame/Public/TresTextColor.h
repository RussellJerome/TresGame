#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresTextColor.generated.h"

USTRUCT(BlueprintType)
struct FTresTextColor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName Name;
    
    UPROPERTY(EditDefaultsOnly)
    FColor Color;
    
    TRESGAME_API FTresTextColor();
};

