#pragma once
#include "CoreMinimal.h"
#include "TresEx304HitEffectManager.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresEx304HitEffectManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_LaserEffectCmp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_SparkEffectCmp;
    
public:
    TRESGAME_API FTresEx304HitEffectManager();
};

