#pragma once
#include "CoreMinimal.h"
#include "TresEx048BladeEffectMan.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresEx048BladeEffectMan {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_BladeEffectCmp[2];
    
    TRESGAME_API FTresEx048BladeEffectMan();
};

