#pragma once
#include "CoreMinimal.h"
#include "ESQEX_KD_ParameterType.h"
#include "SQEX_KineDriverConnectEZParamLink.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverConnectEZParamLink {
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
    float PX0;
    
    UPROPERTY(EditAnywhere)
    float VX1_0;
    
    UPROPERTY(EditAnywhere)
    float VX2_1;
    
    UPROPERTY(EditAnywhere)
    float Grad0;
    
    UPROPERTY(EditAnywhere)
    float Grad1;
    
    UPROPERTY(EditAnywhere)
    float PY0;
    
    UPROPERTY(EditAnywhere)
    float PY0A;
    
    UPROPERTY(EditAnywhere)
    float PY0B;
    
    UPROPERTY(EditAnywhere)
    float PY1;
    
    UPROPERTY(EditAnywhere)
    float PY1A;
    
    UPROPERTY(EditAnywhere)
    float PY1B;
    
    UPROPERTY(EditAnywhere)
    float PY2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ByCoef;
    
    KINEDRIVERRT_API FSQEX_KineDriverConnectEZParamLink();
};

