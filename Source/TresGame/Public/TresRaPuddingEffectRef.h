#pragma once
#include "CoreMinimal.h"
#include "TresRaPuddingEffectRef.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresRaPuddingEffectRef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ID;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* EffectRef;
    
    TRESGAME_API FTresRaPuddingEffectRef();
};

