#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiGameOverHintData.generated.h"

USTRUCT()
struct FTresGumiGameOverHintData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString HintNameLocSpaceKey;
    
    TRESGAME_API FTresGumiGameOverHintData();
};

