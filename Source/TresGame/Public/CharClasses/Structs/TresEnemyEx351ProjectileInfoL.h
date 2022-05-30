#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyEx351ProjectileInfoL.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx351ProjectileInfoL {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FRotator SpawnAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator FireAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float FireDelay;
    
    TRESGAME_API FTresEnemyEx351ProjectileInfoL();
};

