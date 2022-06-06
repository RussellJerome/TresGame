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
    TEnumAsByte<ESQEX_KD_ExtrapolateType> ExtrapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_KineDriverCurveKey> Keys;
    
    KINEDRIVERRT_API FSQEX_KineDriverConnectLinkWith();
};

