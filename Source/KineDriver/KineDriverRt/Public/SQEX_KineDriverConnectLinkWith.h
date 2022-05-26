#pragma once
#include "CoreMinimal.h"
#include "SQEX_KineDriverCurveKey.h"
#include "ESQEX_KD_ParameterType.h"
#include "ESQEX_KD_ExtrapolateType.h"
#include "SQEX_KineDriverConnectLinkWith.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverConnectLinkWith {
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
    TEnumAsByte<ESQEX_KD_ExtrapolateType> ExtrapType;
    
    UPROPERTY()
    TArray<FSQEX_KineDriverCurveKey> Keys;
    
    KINEDRIVERRT_API FSQEX_KineDriverConnectLinkWith();
};

