#pragma once
#include "CoreMinimal.h"
#include "ESQEX_KD_OperatorType.h"
#include "SQEX_KineDriverOperatorHead.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_KineDriverOperatorHead {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Owner;
    
    UPROPERTY()
    int32 WorkIndex;
    
    UPROPERTY()
    TEnumAsByte<ESQEX_KD_OperatorType> OpType;
    
    UPROPERTY()
    int32 OperatorBody;
    
    KINEDRIVERRT_API FSQEX_KineDriverOperatorHead();
};

