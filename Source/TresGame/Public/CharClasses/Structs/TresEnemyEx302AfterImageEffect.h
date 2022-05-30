#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx302AfterImageEffect.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresEnemyEx302AfterImageEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* WarpEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* VisibleEffectData;
    
    TRESGAME_API FTresEnemyEx302AfterImageEffect();
};

