#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuImageResource.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuImageResource {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_TextureIndex;
    
    UPROPERTY()
    float m_U;
    
    UPROPERTY()
    float m_V;
    
    UPROPERTY()
    float m_UL;
    
    UPROPERTY()
    float m_VL;
    
    UPROPERTY()
    bool m_UseScaleGrid;
    
    UPROPERTY()
    float m_ScaleGridLeft;
    
    UPROPERTY()
    float m_ScaleGridRight;
    
    UPROPERTY()
    float m_ScaleGridTop;
    
    UPROPERTY()
    float m_ScaleGridBottom;
    
    UPROPERTY()
    float m_ScaleGridWidth;
    
    UPROPERTY()
    float m_ScaleGridHeight;
    
    TRESGAME_API FTresDebugMenuImageResource();
};

