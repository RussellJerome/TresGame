#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyEx351ProjectileInfoL.h"
#include "TresEnemyEx351SpawnInfoL.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FTresEnemyEx351SpawnInfoL {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> FreezeShotProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsBaseTarget: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx351ProjectileInfoL> ProjectileInfoL;
    
    TRESGAME_API FTresEnemyEx351SpawnInfoL();
};

