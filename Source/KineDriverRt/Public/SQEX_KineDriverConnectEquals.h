#pragma once
#include "CoreMinimal.h"
#include "ESQEX_KD_ParameterType.h"
#include "SQEX_KineDriverConnectEquals.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverConnectEquals {
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
    float Coef;
    
    KINEDRIVERRT_API FSQEX_KineDriverConnectEquals();
};

