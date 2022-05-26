#pragma once
#include "CoreMinimal.h"
#include "TresTheaterMapInfo.generated.h"

class UTresTexturePump;

USTRUCT(BlueprintType)
struct FTresTheaterMapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName MapName;
    
    UPROPERTY(EditDefaultsOnly)
    UTresTexturePump* TexturePump;
    
    TRESGAME_API FTresTheaterMapInfo();
};

