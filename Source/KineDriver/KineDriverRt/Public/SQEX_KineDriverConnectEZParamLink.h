#pragma once
#include "CoreMinimal.h"
#include "ESQEX_KD_ParameterType.h"
#include "SQEX_KineDriverConnectEZParamLink.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverConnectEZParamLink {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 InOperator;
    
    UPROPERTY()
    TEnumAsByte<ESQEX_KD_ParameterType> InParameterType;
    
    UPROPERTY()
    int32 OutOperator;
    
    UPROPERTY()
    TEnumAsByte<ESQEX_KD_ParameterType> OutParameterType;
    
    UPROPERTY()
    int32 OtherTargetParamIndex;
    
    UPROPERTY()
    float PX0;
    
    UPROPERTY()
    float VX1_0;
    
    UPROPERTY()
    float VX2_1;
    
    UPROPERTY()
    float Grad0;
    
    UPROPERTY()
    float Grad1;
    
    UPROPERTY()
    float PY0;
    
    UPROPERTY()
    float PY0A;
    
    UPROPERTY()
    float PY0B;
    
    UPROPERTY()
    float PY1;
    
    UPROPERTY()
    float PY1A;
    
    UPROPERTY()
    float PY1B;
    
    UPROPERTY()
    float PY2;
    
    UPROPERTY()
    bool ByCoef;
    
    KINEDRIVERRT_API FSQEX_KineDriverConnectEZParamLink();
};

