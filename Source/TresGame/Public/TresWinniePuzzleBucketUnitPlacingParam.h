#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresWinniePuzzleBucketUnitPlacingParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBucketUnitPlacingParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector2D LocationOffsetXY;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator Rotation;
    
    UPROPERTY(EditDefaultsOnly)
    FVector Scale;
    
    TRESGAME_API FTresWinniePuzzleBucketUnitPlacingParam();
};

