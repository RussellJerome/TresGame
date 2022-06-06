#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresShortcutCommandPageData.h"
#include "TresShortcutCommandData.generated.h"

USTRUCT(BlueprintType)
struct FTresShortcutCommandData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresShortcutCommandPageData Page1;
    
    UPROPERTY(EditDefaultsOnly)
    FTresShortcutCommandPageData Page2;
    
    UPROPERTY(EditDefaultsOnly)
    FTresShortcutCommandPageData Page3;
    
    TRESGAME_API FTresShortcutCommandData();
};

