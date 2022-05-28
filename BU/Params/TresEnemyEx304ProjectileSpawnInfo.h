#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx304ProjectileSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx304ProjectileSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float SpawnAngleYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnAnglePitch;
    
    TRESGAME_API FTresEnemyEx304ProjectileSpawnInfo();
};

