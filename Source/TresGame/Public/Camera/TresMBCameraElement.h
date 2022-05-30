#pragma once
#include "CoreMinimal.h"
#include "TresMBCameraElement.generated.h"

USTRUCT(BlueprintType)
struct FTresMBCameraElement {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_Index;
    
    UPROPERTY()
    int32 m_InterestIndex;
    
    UPROPERTY()
    float m_roll;
    
    UPROPERTY()
    float m_FOV;
    
    UPROPERTY()
    int32 m_CurveIndex[2];
    
    TRESGAME_API FTresMBCameraElement();
};

