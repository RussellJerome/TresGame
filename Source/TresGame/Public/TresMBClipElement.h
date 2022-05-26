#pragma once
#include "CoreMinimal.h"
#include "TresMBClipElement.generated.h"

USTRUCT(BlueprintType)
struct FTresMBClipElement {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_CameraIndex;
    
    UPROPERTY()
    float m_Start;
    
    UPROPERTY()
    float m_Stop;
    
    UPROPERTY()
    bool m_bFadeOut;
    
    UPROPERTY()
    float m_FadeoutTime;
    
    UPROPERTY()
    bool m_bFadeOutCaptureEveryFrame;
    
    UPROPERTY()
    float m_FadeOutCaptureOffsetTime;
    
    UPROPERTY()
    float m_PreBlankTime;
    
    UPROPERTY()
    float m_PostBlankTime;
    
    TRESGAME_API FTresMBClipElement();
};

