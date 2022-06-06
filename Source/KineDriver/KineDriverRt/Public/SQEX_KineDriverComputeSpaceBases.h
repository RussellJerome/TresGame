#pragma once
#include "CoreMinimal.h"
#include "SQEX_KineDriverComputeSpaceBases.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverComputeSpaceBases {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetObjectBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsScaleOpChild;
    
    KINEDRIVERRT_API FSQEX_KineDriverComputeSpaceBases();
};

