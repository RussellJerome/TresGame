#pragma once
#include "CoreMinimal.h"
#include "TresDarkRushCircleParam.generated.h"

USTRUCT(BlueprintType)
struct FTresDarkRushCircleParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_IntervalRange;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_m_InitAngle;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_m_IntervalAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsMoveReverse;
    
    TRESGAME_API FTresDarkRushCircleParam();
};

