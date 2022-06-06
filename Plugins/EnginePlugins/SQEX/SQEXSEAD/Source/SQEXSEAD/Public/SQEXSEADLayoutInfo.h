#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADLayoutType.h"
#include "UObject/NoExportTypes.h"
#include "SQEXSEADLayoutInfo.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADLayoutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEXSEADLayoutType::Type> LayoutType;
    
    UPROPERTY(EditAnywhere)
    float InnerRadius;
    
    UPROPERTY(EditAnywhere)
    float OuterRadius;
    
    UPROPERTY(EditAnywhere)
    float OcclusionLPF;
    
    UPROPERTY(EditAnywhere)
    float OcclusionVolume;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> LayoutPointLocations;
    
    SQEXSEAD_API FSQEXSEADLayoutInfo();
};

