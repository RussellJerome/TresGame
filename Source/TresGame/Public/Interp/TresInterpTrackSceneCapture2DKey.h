#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackSceneCapture2DKey.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackSceneCapture2DKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    FName m_TargetCamGroup;
    
    UPROPERTY(EditAnywhere)
    bool m_CaptureEveryFrame;
    
    UPROPERTY(EditAnywhere)
    float m_CaptureRange;
    
    UPROPERTY(EditAnywhere)
    float m_CaptureOffsetTime;
    
    TRESGAME_API FTresInterpTrackSceneCapture2DKey();
};

