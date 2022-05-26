#pragma once
#include "CoreMinimal.h"
#include "EnemyShipCoreData.generated.h"

class UParticleSystemComponent;
class UTresLockonTargetComponent;
class UTresBodyCollPrimitive;

USTRUCT(BlueprintType)
struct FEnemyShipCoreData {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_CoreParticleComponent;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_CoreThonParticleComponent;
    
    UPROPERTY(Export, Transient)
    UTresLockonTargetComponent* m_CoreLockOnComponent;
    
    UPROPERTY(Export, Transient)
    UTresBodyCollPrimitive* m_CoreBodyCollPrim;
    
    TRESGAME_API FEnemyShipCoreData();
};

