#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CAMovableBarrelPrizeParam.generated.h"

USTRUCT(BlueprintType)
struct FCAMovableBarrelPrizeParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_InitSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_InitSpeedRand;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_PitchRange;
    
    UPROPERTY(EditAnywhere)
    float m_AirResistance;
    
    UPROPERTY(EditAnywhere)
    float m_PrizeLivingTime;
    
    TRESGAME_API FCAMovableBarrelPrizeParam();
};

