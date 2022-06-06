#pragma once
#include "CoreMinimal.h"
#include "TresRemyCookingGameDataTableBase.h"
#include "TresRemyEggCrackingV2DataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyEggCrackingV2DataTable : public FTresRemyCookingGameDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RightStickEggCrackingValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TooInclinedPercent;
    
    TRESGAME_API FTresRemyEggCrackingV2DataTable();
};

