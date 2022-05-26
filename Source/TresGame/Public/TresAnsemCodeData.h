#pragma once
#include "CoreMinimal.h"
#include "ETresItemDefReport.h"
#include "Engine/DataTable.h"
#include "TresAnsemCodeData.generated.h"

USTRUCT()
struct FTresAnsemCodeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefReport ItemID;
    
    UPROPERTY(EditDefaultsOnly)
    FString DetailTextID;
    
    TRESGAME_API FTresAnsemCodeData();
};

