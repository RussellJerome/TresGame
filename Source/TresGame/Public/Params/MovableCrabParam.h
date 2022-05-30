#pragma once
#include "CoreMinimal.h"
#include "MovableCrabParam.generated.h"

USTRUCT(BlueprintType)
struct FMovableCrabParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_directionChangeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_turnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_turnRateOnHitWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_turnRateTimeOnHitWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_moveRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_moveRangePredictRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_defaultVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_maxDeltaAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_gravityScaleOnMove;
    
    TRESGAME_API FMovableCrabParam();
};

