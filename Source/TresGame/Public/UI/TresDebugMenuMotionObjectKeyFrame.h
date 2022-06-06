#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresDebugMenuMotionObjectKeyFrame.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuMotionObjectKeyFrame {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector2D m_Anchor;
    
    UPROPERTY()
    FVector2D m_Next;
    
    UPROPERTY()
    FVector2D m_Previous;
    
    UPROPERTY()
    float m_Time;
    
    TRESGAME_API FTresDebugMenuMotionObjectKeyFrame();
};

