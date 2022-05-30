#pragma once
#include "CoreMinimal.h"
#include "TresPhotoHologramEditEffectDef.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresPhotoHologramEditEffectDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float TargetMaxRootSize;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* EditMarkerEffectData;
    
    TRESGAME_API FTresPhotoHologramEditEffectDef();
};

