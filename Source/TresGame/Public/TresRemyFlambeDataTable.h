#pragma once
#include "CoreMinimal.h"
#include "TresRemyCookingGameDataTableBase.h"
#include "TresRemyFlambeDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyFlambeDataTable : public FTresRemyCookingGameDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LeftStickFlambeValue;
    
    TRESGAME_API FTresRemyFlambeDataTable();
};

