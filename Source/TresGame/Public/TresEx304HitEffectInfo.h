#pragma once
#include "CoreMinimal.h"
#include "TresEx304HitEffectInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresEx304HitEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_AtkGrpNames;
    
    TRESGAME_API FTresEx304HitEffectInfo();
};

