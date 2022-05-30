#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RemyDishLevel.h"
#include "TresRemyUnlockDishLevelDataTable.generated.h"

USTRUCT()
struct FTresRemyUnlockDishLevelDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int16 EarnUnlockDishLevelPointsWhenSuccess;
    
    UPROPERTY(EditDefaultsOnly)
    int16 EarnUnlockDishLevelPointsWhenGreatSuccess;
    
    UPROPERTY(EditDefaultsOnly)
    int16 EarnUnlockDishLevelPointsWhenFail;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<RemyDishLevel, int16> UnlockDishLevelPoints;
    
    TRESGAME_API FTresRemyUnlockDishLevelDataTable();
};

