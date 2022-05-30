#pragma once
#include "CoreMinimal.h"
#include "TresFieldAttackParamBase_e_ex357.h"
#include "TresFieldAttackTimeParam_e_ex357.generated.h"

UCLASS(EditInlineNew)
class UTresFieldAttackTimeParam_e_ex357 : public UTresFieldAttackParamBase_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float StartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float IntervalTime;
    
    UTresFieldAttackTimeParam_e_ex357();
};

