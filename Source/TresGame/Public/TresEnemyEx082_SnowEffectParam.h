#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx082_SnowEffectParam.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresEnemyEx082_SnowEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* Effect;
    
    UPROPERTY(EditDefaultsOnly)
    FName BoneName;
    
    TRESGAME_API FTresEnemyEx082_SnowEffectParam();
};

