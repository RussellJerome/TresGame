#pragma once
#include "CoreMinimal.h"
#include "ca404aSplineParam.generated.h"

USTRUCT(BlueprintType)
struct Fca404aSplineParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_DefaultOffsetDistance;
    
    UPROPERTY(EditAnywhere)
    float m_MaxApproachAngle;
    
    UPROPERTY(EditAnywhere)
    float m_MaxApproachDistance;
    
    UPROPERTY(EditAnywhere)
    float m_OffsetCorrectionAddRateOnForward;
    
    UPROPERTY(EditAnywhere)
    float m_OffsetCorrectionMaxDist;
    
    UPROPERTY(EditAnywhere)
    float m_OffsetCorrectionMaxSpeed;
    
    TRESGAME_API Fca404aSplineParam();
};

