#pragma once
#include "CoreMinimal.h"
#include "ESQEX_KD_OperatorType.h"
#include "SQEX_KineDriverOperatorHead.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverOperatorHead {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WorkIndex;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_KD_OperatorType> OpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OperatorBody;
    
    KINEDRIVERRT_API FSQEX_KineDriverOperatorHead();
};

