#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresAreaNameDataTable.generated.h"

USTRUCT()
struct FTresAreaNameDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString AreaNameKey;
    
    UPROPERTY(EditAnywhere)
    FString SubAreaNameKey;
    
    UPROPERTY(EditAnywhere)
    FName MapNameKey;
    
    UPROPERTY(EditAnywhere)
    FName NavMapNameKey;
    
    TRESGAME_API FTresAreaNameDataTable();
};

