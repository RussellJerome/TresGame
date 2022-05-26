#pragma once
#include "CoreMinimal.h"
#include "SQEX_KineDriverComputeSpaceBases.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverComputeSpaceBases {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TargetObject;
    
    UPROPERTY()
    FName TargetObjectBoneName;
    
    UPROPERTY()
    bool IsScaleOpChild;
    
    KINEDRIVERRT_API FSQEX_KineDriverComputeSpaceBases();
};

