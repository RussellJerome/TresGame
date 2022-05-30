#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresEx050EffectInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresEx050EffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* pEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FName AttachName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector Location;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator Rotation;
    
    TRESGAME_API FTresEx050EffectInfo();
};

