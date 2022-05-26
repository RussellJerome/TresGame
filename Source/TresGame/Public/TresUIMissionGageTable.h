#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresUIMissionGageColorType.h"
#include "TresUIMissionGageTable.generated.h"

class USwfMovie;

USTRUCT()
struct FTresUIMissionGageTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* IconAsset;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 InitialValue;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 MaxValue;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIMissionGageColorType GageColorType;
    
    UPROPERTY(EditDefaultsOnly)
    FString GageTextLocSpaceKey;
    
    TRESGAME_API FTresUIMissionGageTable();
};

