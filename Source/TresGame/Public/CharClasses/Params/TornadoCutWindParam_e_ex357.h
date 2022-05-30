#pragma once
#include "CoreMinimal.h"
#include "TornadoCutWindParam_e_ex357.generated.h"

USTRUCT(BlueprintType)
struct FTornadoCutWindParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Distance;
    
    UPROPERTY(EditDefaultsOnly)
    float WindForce;
    
    TRESGAME_API FTornadoCutWindParam_e_ex357();
};

