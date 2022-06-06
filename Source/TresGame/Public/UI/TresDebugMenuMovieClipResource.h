#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuTimeline.h"
#include "TresDebugMenuFrameLabel.h"
#include "TresDebugMenuTween.h"
#include "TresDebugMenuMovieClipResource.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuMovieClipResource {
    GENERATED_BODY()
public:
    UPROPERTY()
    float m_FrameRate;
    
    UPROPERTY()
    int32 m_Duration;
    
    UPROPERTY()
    TArray<FTresDebugMenuFrameLabel> m_Labels;
    
    UPROPERTY()
    TArray<FTresDebugMenuTween> m_Tween;
    
    UPROPERTY()
    TArray<FTresDebugMenuTimeline> m_Timelines;
    
    TRESGAME_API FTresDebugMenuMovieClipResource();
};

