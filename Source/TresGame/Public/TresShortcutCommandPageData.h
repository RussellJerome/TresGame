#pragma once
#include "CoreMinimal.h"
#include "ETresCommandKind.h"
#include "TresShortcutCommandPageData.generated.h"

USTRUCT(BlueprintType)
struct FTresShortcutCommandPageData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> Commands[4];
    
    TRESGAME_API FTresShortcutCommandPageData();
};

