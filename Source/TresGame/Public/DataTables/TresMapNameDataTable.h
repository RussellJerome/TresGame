#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresMapNameDataTable.generated.h"

class UTexture;

USTRUCT()
struct FTresMapNameDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture* IconAsset;
    
    UPROPERTY(EditAnywhere)
    FString NameKey;
    
    TRESGAME_API FTresMapNameDataTable();
};

