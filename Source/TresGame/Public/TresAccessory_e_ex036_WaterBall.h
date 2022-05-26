#pragma once
#include "CoreMinimal.h"
#include "TresAccessory_e_ex036_WaterBall.generated.h"

class UParticleSystemComponent;

USTRUCT()
struct FTresAccessory_e_ex036_WaterBall {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_WaterBallEff;
    
    TRESGAME_API FTresAccessory_e_ex036_WaterBall();
};

