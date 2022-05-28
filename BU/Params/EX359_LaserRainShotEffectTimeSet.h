#pragma once
#include "CoreMinimal.h"
#include "EX359_LaserRainShotEffectTimeSet.generated.h"

USTRUCT(BlueprintType)
struct FEX359_LaserRainShotEffectTimeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fTime;
    
    TRESGAME_API FEX359_LaserRainShotEffectTimeSet();
};

