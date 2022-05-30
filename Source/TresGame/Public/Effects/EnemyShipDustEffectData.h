#pragma once
#include "CoreMinimal.h"
#include "EnemyShipDustEffectData.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FEnemyShipDustEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_Particle;
    
    TRESGAME_API FEnemyShipDustEffectData();
};

