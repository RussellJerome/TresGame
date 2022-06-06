#pragma once
#include "CoreMinimal.h"
#include "ESQEX_KD_ParameterType.h"
#include "SQEX_KineDriverConnectEZParamLinkLinear.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverConnectEZParamLinkLinear {
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
    float Scale;
    
    UPROPERTY()
    float Offset;
    
    UPROPERTY()
    float ClampMin;
    
    UPROPERTY()
    float ClampMax;
    
    UPROPERTY()
    bool EnableMin;
    
    UPROPERTY()
    bool EnableMax;
    
    KINEDRIVERRT_API FSQEX_KineDriverConnectEZParamLinkLinear();
};

