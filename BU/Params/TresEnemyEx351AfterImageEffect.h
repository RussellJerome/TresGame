#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx351AfterImageEffect.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresEnemyEx351AfterImageEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* WarpEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* VisibleEffectData;
    
    TRESGAME_API FTresEnemyEx351AfterImageEffect();
};

