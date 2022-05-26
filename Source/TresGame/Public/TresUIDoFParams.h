#pragma once
#include "CoreMinimal.h"
#include "TresUIDoFParams.generated.h"

USTRUCT(BlueprintType)
struct FTresUIDoFParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float DepthOfFieldFocalDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float DepthOfFieldFocalRegion;
    
    UPROPERTY(EditDefaultsOnly)
    float DepthOfFieldNearTransitionRegion;
    
    UPROPERTY(EditDefaultsOnly)
    float DepthOfFieldFarTransitionRegion;
    
    UPROPERTY(EditDefaultsOnly)
    float DepthOfFieldScale;
    
    UPROPERTY(EditDefaultsOnly)
    float DepthOfFieldNearBlurSize;
    
    UPROPERTY(EditDefaultsOnly)
    float DepthOfFieldFarBlurSize;
    
    TRESGAME_API FTresUIDoFParams();
};

