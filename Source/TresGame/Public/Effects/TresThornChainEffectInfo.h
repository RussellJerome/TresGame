#pragma once
#include "CoreMinimal.h"
#include "TresThornChainEffectInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresThornChainEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttachName;
    
    TRESGAME_API FTresThornChainEffectInfo();
};

