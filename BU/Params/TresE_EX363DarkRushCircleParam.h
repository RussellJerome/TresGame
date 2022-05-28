#pragma once
#include "CoreMinimal.h"
#include "TresE_EX363DarkRushCircleParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_EX363DarkRushCircleParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_IntervalRange;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_InitAngle;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_IntervalAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsMoveReverse;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_patternID;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_TargetCenter;
    
    TRESGAME_API FTresE_EX363DarkRushCircleParam();
};

