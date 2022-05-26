#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresInterpTrackLightPropertiesKey.h"
#include "TresInterpTrackLightProperties.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackLightProperties : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> m_ComponentTags;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_IgnoreComponentTags;
    
    UPROPERTY(EditAnywhere)
    bool m_IncludeChildActors;
    
    UPROPERTY(EditAnywhere)
    bool m_Restore;
    
    UPROPERTY(EditAnywhere)
    bool m_EnableMinRoughness;
    
    UPROPERTY(EditAnywhere)
    bool m_EnableShadowResolutionScale;
    
    UPROPERTY(EditAnywhere)
    bool m_EnableShadowBias;
    
    UPROPERTY(EditAnywhere)
    bool m_EnableDynamicShadowDistanceMovableLight;
    
    UPROPERTY(EditAnywhere)
    bool m_EnableDynamicShadowDistanceStationaryLight;
    
    UPROPERTY(EditAnywhere)
    bool m_EnableDynamicShadowCascades;
    
    UPROPERTY(EditAnywhere)
    bool m_EnableCascadeDistributionExponent;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresInterpTrackLightPropertiesKey> m_Keys;
    
    UTresInterpTrackLightProperties();
};

