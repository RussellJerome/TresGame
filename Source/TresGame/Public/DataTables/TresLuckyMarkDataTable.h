#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresLuckyMarkDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresLuckyMarkDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName World;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MarkIndex;
    
    TRESGAME_API FTresLuckyMarkDataTable();
};

