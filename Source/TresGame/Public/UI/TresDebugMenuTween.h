#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuIntPair.h"
#include "ETresDebugMenuTweenType.h"
#include "TresDebugMenuTween.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuTween {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_StartFrame;
    
    UPROPERTY()
    int32 m_EndFrame;
    
    UPROPERTY()
    TEnumAsByte<ETresDebugMenuTweenType> m_TweenType;
    
    UPROPERTY()
    float m_Acceleration;
    
    UPROPERTY()
    FTresDebugMenuIntPair m_ElementPair;
    
    TRESGAME_API FTresDebugMenuTween();
};

