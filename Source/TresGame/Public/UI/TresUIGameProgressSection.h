#pragma once
#include "CoreMinimal.h"
#include "TresUIGameFlagData.h"
#include "TresUIGameProgressSection.generated.h"

USTRUCT(BlueprintType)
struct FTresUIGameProgressSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagData Start;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagData End;
    
    TRESGAME_API FTresUIGameProgressSection();
};

