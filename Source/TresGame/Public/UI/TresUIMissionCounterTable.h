#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresUIMissionCounterTable.generated.h"

class UTexture;

USTRUCT()
struct FTresUIMissionCounterTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTexture* IconAsset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxValue;
    
    UPROPERTY(EditDefaultsOnly)
    FString CounterTextLocNameSpaceKey;
    
    TRESGAME_API FTresUIMissionCounterTable();
};

