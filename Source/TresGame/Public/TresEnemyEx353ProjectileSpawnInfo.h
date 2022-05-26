#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx353ProjectileSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx353ProjectileSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float SpawnAngleYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnAnglePitch;
    
    UPROPERTY(EditDefaultsOnly)
    float LifeTime;
    
    TRESGAME_API FTresEnemyEx353ProjectileSpawnInfo();
};

