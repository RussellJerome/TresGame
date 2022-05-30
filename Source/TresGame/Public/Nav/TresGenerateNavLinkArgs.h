#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGenerateNavLinkArgs.generated.h"

USTRUCT(BlueprintType)
struct FTresGenerateNavLinkArgs {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FFloatInterval Height;
    
    UPROPERTY(Config, EditAnywhere)
    FFloatInterval Length;
    
    UPROPERTY(Config, EditAnywhere)
    float SamplingDistance;
    
    UPROPERTY(EditAnywhere)
    float DefaultSearchAngle;
    
    UPROPERTY(EditAnywhere)
    float CornerSearchAngle;
    
    UPROPERTY(EditAnywhere)
    float SamplingAngle;
    
    UPROPERTY(EditAnywhere)
    float MinPathLengthReductionPercentage;
    
    TRESGAME_API FTresGenerateNavLinkArgs();
};

