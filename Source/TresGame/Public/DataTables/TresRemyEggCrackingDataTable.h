#pragma once
#include "CoreMinimal.h"
#include "TresRemyCookingGameDataTableBase.h"
#include "TresRemyEggCrackingDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyEggCrackingDataTable : public FTresRemyCookingGameDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StickEggCrackingValue;
    
    TRESGAME_API FTresRemyEggCrackingDataTable();
};

