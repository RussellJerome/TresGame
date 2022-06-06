#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresIconTextDataTable.generated.h"

USTRUCT()
struct FTresIconTextDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 X;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Y;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Width;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Height;
    
    UPROPERTY(EditDefaultsOnly)
    int32 VSpace;
    
    UPROPERTY(EditDefaultsOnly)
    FString BindKey;
    
    TRESGAME_API FTresIconTextDataTable();
};

