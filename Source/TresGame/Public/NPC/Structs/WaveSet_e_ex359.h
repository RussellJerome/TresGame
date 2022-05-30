#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WaveInfo_e_ex359.h"
#include "WaveSet_e_ex359.generated.h"

class ATresProjectile_e_ex359_Wave;
class ATresProjectile_e_ex359_Wave_OneCollision;

USTRUCT(BlueprintType)
struct FWaveSet_e_ex359 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex359_Wave> pWaveSpawner;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex359_Wave_OneCollision> pOneCollision;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FWaveInfo_e_ex359> WaveInfoArray;
    
    TRESGAME_API FWaveSet_e_ex359();
};

