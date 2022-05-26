#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleBombInterferedParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBombInterferedParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool IsInterfereUnits;
    
    UPROPERTY(EditDefaultsOnly)
    float DistanceWithInterferedUnitOnSimulate;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsInterfereUnitsFloat;
    
    TRESGAME_API FTresWinniePuzzleBombInterferedParam();
};

