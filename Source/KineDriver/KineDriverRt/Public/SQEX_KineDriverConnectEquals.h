#pragma once
#include "CoreMinimal.h"
#include "ESQEX_KD_ParameterType.h"
#include "SQEX_KineDriverConnectEquals.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverConnectEquals {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InOperator;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_KD_ParameterType> InParameterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutOperator;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_KD_ParameterType> OutParameterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OtherTargetParamIndex;
    
    UPROPERTY(EditAnywhere)
    float Coef;
    
    KINEDRIVERRT_API FSQEX_KineDriverConnectEquals();
};

