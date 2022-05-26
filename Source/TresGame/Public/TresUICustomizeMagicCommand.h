#pragma once
#include "CoreMinimal.h"
#include "TresUICustomizeCommand.h"
#include "TresUICustomizeMagicCommand.generated.h"

USTRUCT(BlueprintType)
struct FTresUICustomizeMagicCommand {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresUICustomizeCommand Command[3];
    
    TRESGAME_API FTresUICustomizeMagicCommand();
};

