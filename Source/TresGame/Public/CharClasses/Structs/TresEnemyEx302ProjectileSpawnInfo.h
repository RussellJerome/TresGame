#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx302ProjectileSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx302ProjectileSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float SpawnAngle;
    
    TRESGAME_API FTresEnemyEx302ProjectileSpawnInfo();
};

