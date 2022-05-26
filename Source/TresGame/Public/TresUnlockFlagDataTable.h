#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresUnlockFlagDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresUnlockFlagDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName GameFlagName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName GameFlagLabel;
    
    TRESGAME_API FTresUnlockFlagDataTable();
};

