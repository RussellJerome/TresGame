#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackLightPropertiesKey.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackLightPropertiesKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    float m_MinRoughness;
    
    UPROPERTY(EditAnywhere)
    float m_ShadowResolutionScale;
    
    UPROPERTY(EditAnywhere)
    float m_ShadowBias;
    
    UPROPERTY(EditAnywhere)
    float m_DynamicShadowDistanceMovableLight;
    
    UPROPERTY(EditAnywhere)
    float m_DynamicShadowDistanceStationaryLight;
    
    UPROPERTY(EditAnywhere)
    int32 m_DynamicShadowCascades;
    
    UPROPERTY(EditAnywhere)
    float m_CascadeDistributionExponent;
    
    TRESGAME_API FTresInterpTrackLightPropertiesKey();
};

