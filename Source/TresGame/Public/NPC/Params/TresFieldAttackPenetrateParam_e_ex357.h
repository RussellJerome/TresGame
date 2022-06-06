#pragma once
#include "CoreMinimal.h"
#include "TresFieldAttackParamBase_e_ex357.h"
#include "TresFieldAttackPenetrateParam_e_ex357.generated.h"

UCLASS(EditInlineNew)
class UTresFieldAttackPenetrateParam_e_ex357 : public UTresFieldAttackParamBase_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float PenetrateCheckDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float StartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float AttackStartintervalTime;
    
    UTresFieldAttackPenetrateParam_e_ex357();
};

