#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresScalabilityCsvData.generated.h"

USTRUCT()
struct FTresScalabilityCsvData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 MotionBlur;
    
    UPROPERTY(VisibleAnywhere)
    int32 AAQuality;
    
    UPROPERTY(VisibleAnywhere)
    int32 DepthOfFieldQuality;
    
    UPROPERTY(VisibleAnywhere)
    int32 AmbientOcclusionLevels;
    
    UPROPERTY(VisibleAnywhere)
    int32 EyeAdaptationQuality;
    
    UPROPERTY(VisibleAnywhere)
    int32 SSRQuality;
    
    UPROPERTY(VisibleAnywhere)
    int32 TranslucencyVolumeBlur;
    
    UPROPERTY(VisibleAnywhere)
    int32 TranslucencyLightingVolumeDim;
    
    UPROPERTY(VisibleAnywhere)
    int32 ShadowQuality;
    
    TRESGAME_API FTresScalabilityCsvData();
};

