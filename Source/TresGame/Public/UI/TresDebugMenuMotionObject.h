#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuMotionObject.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuMotionObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    float m_X;
    
    UPROPERTY()
    float m_Y;
    
    UPROPERTY()
    float m_Width;
    
    UPROPERTY()
    float m_Height;
    
    UPROPERTY()
    TArray<int32> m_Properties;
    
    TRESGAME_API FTresDebugMenuMotionObject();
};

