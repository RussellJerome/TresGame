#pragma once
#include "CoreMinimal.h"
#include "TresUIBlurParams.generated.h"

USTRUCT(BlueprintType)
struct FTresUIBlurParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float fUIBlurIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float fUIBlurSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float fUIBlurHoleSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float fUIBlurCharaAdaptationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float fUIBlurHoleEdgeSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float fUILensDistortionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float fUILensDistortionPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float fUILensDistortionEdgeSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float fUILensDistortionContrast;
    
    TRESGAME_API FTresUIBlurParams();
};

