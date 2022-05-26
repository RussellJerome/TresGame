#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipHitEffectInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresGumiShipHitEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsAttach;
    
    TRESGAME_API FTresGumiShipHitEffectInfo();
};

