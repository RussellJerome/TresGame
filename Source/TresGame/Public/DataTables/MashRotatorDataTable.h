#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MashRotatorDataTable.generated.h"

USTRUCT(BlueprintType)
struct FMashRotatorDataTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName _Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator _Rotater;
    
    TRESGAME_API FMashRotatorDataTable();
};

