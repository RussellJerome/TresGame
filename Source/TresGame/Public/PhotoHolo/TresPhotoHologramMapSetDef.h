#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresPhotoHologramMapSetDef.generated.h"

USTRUCT()
struct FTresPhotoHologramMapSetDef : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> ValidMapList;
    
    TRESGAME_API FTresPhotoHologramMapSetDef();
};

