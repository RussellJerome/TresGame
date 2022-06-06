#pragma once
#include "CoreMinimal.h"
#include "ETresCommandKind.h"
#include "TresUICustomizeCommand.generated.h"

USTRUCT(BlueprintType)
struct FTresUICustomizeCommand {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> CommandKind;
    
    UPROPERTY(EditDefaultsOnly)
    FString HelpTextNamespaceKey;
    
    TRESGAME_API FTresUICustomizeCommand();
};

