#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx361ProjectileSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx361ProjectileSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float ShockWaveRotYaw;
    
    TRESGAME_API FTresEnemyEx361ProjectileSpawnInfo();
};

