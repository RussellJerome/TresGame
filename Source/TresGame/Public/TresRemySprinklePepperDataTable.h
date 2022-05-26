#pragma once
#include "CoreMinimal.h"
#include "TresRemyCookingGameDataTableBase.h"
#include "TresRemySprinklePepperDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemySprinklePepperDataTable : public FTresRemyCookingGameDataTableBase {
    GENERATED_BODY()
public:
    TRESGAME_API FTresRemySprinklePepperDataTable();
};

