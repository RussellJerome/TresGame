#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "TresInterpTrackMorphControlElement.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackMorphControlElement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_TargetName;
    
    UPROPERTY(EditAnywhere)
    FAlphaBlend m_AlphaBlend;
    
    UPROPERTY(EditAnywhere)
    float m_StartValue;
    
    UPROPERTY(EditAnywhere)
    float m_EndValue;
    
    TRESGAME_API FTresInterpTrackMorphControlElement();
};

