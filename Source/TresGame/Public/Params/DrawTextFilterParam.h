#pragma once
#include "CoreMinimal.h"
#include "EDrawTextFilterType.h"
#include "UObject/NoExportTypes.h"
#include "DrawTextFilterParam.generated.h"

USTRUCT(BlueprintType)
struct FDrawTextFilterParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<EDrawTextFilterType> m_FilterType;
    
    UPROPERTY()
    float m_BlurX;
    
    UPROPERTY()
    float m_BlurY;
    
    UPROPERTY()
    float m_Strength;
    
    UPROPERTY()
    FColor m_Color;
    
    UPROPERTY()
    float m_Angle;
    
    UPROPERTY()
    float m_Distance;
    
    TRESGAME_API FDrawTextFilterParam();
};

