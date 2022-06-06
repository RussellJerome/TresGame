#pragma once
#include "CoreMinimal.h"
#include "ETresMBCurveInterp.h"
#include "TresMBCurveKeyElement.generated.h"

USTRUCT(BlueprintType)
struct FTresMBCurveKeyElement {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ETresMBCurveInterp> m_Interpolation;
    
    UPROPERTY()
    float m_Time;
    
    UPROPERTY()
    float m_Value;
    
    UPROPERTY()
    float m_Left;
    
    UPROPERTY()
    float m_Right;
    
    TRESGAME_API FTresMBCurveKeyElement();
};

