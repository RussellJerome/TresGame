#pragma once
#include "CoreMinimal.h"
#include "CAMovableBarrelRunAwayParam.generated.h"

USTRUCT(BlueprintType)
struct FCAMovableBarrelRunAwayParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_directionOfRunAwayChangeInterval;
    
    UPROPERTY(EditAnywhere)
    float m_MinDistance;
    
    UPROPERTY(EditAnywhere)
    float m_MaxDistance;
    
    UPROPERTY(EditAnywhere)
    float m_SleepWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_MaxRandomAngleForRunAway;
    
    UPROPERTY(EditAnywhere)
    float m_MaxRandomAngleForMiddle;
    
    UPROPERTY(EditAnywhere)
    float m_MaxRandomAngleForGetBack;
    
    UPROPERTY(EditAnywhere)
    float m_TurnRateForRunAway;
    
    UPROPERTY(EditAnywhere)
    float m_TurnRateForMiddle;
    
    UPROPERTY(EditAnywhere)
    float m_SpeedForRunAway;
    
    UPROPERTY(EditAnywhere)
    float m_SpeedForMiddle;
    
    TRESGAME_API FCAMovableBarrelRunAwayParam();
};

