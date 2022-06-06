#pragma once
#include "CoreMinimal.h"
#include "TresEnemyCardWallParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyCardWallParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float RotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float RotationRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float RotationStopTimeList[5];
    
    TRESGAME_API FTresEnemyCardWallParam_e_ex356();
};

