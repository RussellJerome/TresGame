#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "TresNaviMapData.generated.h"

class UTexture;

USTRUCT()
struct FTresNaviMapData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTexture* TextureAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float Scale;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D Origin;
    
    UPROPERTY(EditDefaultsOnly)
    FName ItemKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    float AngleCorrect;
    
    TRESGAME_API FTresNaviMapData();
};

