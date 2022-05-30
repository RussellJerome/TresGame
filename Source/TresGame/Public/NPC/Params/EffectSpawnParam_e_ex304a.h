#pragma once
#include "CoreMinimal.h"
#include "EffectSpawnParam_e_ex304a.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FEffectSpawnParam_e_ex304a {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 bStartSpawned: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float SpawnTimeRate;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* SpawnParticleSystem;
    
    TRESGAME_API FEffectSpawnParam_e_ex304a();
};

