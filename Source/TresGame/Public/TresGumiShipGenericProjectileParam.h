#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGenericProjectileParam.generated.h"

class UParticleSystem;

USTRUCT()
struct FTresGumiShipGenericProjectileParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    UParticleSystem* m_pAttachEffectType;
    
    UPROPERTY()
    FName m_ProjectileDataName;
    
    TRESGAME_API FTresGumiShipGenericProjectileParam();
};

