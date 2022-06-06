#pragma once
#include "CoreMinimal.h"
#include "TresDecalData.h"
#include "TresEffectUnit.generated.h"

class UParticleSystem;
class USoundBase;

USTRUCT(BlueprintType)
struct FTresEffectUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, NoClear)
    UParticleSystem* MyParticleSystem;
    
    UPROPERTY(EditAnywhere, Export, NoClear)
    USoundBase* MySoundCue;
    
    UPROPERTY(EditAnywhere, Export, NoClear)
    FTresDecalData MyTresDecal;
    
    TRESGAME_API FTresEffectUnit();
};

