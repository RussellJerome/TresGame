#pragma once
#include "CoreMinimal.h"
#include "TresEx353HitEffectManager.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresEx353HitEffectManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_LaserEffectCmp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_SparkEffectCmp;
    
public:
    TRESGAME_API FTresEx353HitEffectManager();
};

