#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleSpecialUnitParam.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresWinniePuzzleSpecialUnitParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool Enable;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SpawnColumnsOffsetMax;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* Particle;
    
    TRESGAME_API FTresWinniePuzzleSpecialUnitParam();
};

