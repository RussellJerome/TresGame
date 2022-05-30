#pragma once
#include "CoreMinimal.h"
#include "TresFieldGenerateParamBase_e_ex357.h"
#include "TresFieldGenerateTargetParam_e_ex357.generated.h"

UCLASS(EditInlineNew)
class UTresFieldGenerateTargetParam_e_ex357 : public UTresFieldGenerateParamBase_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 Num;
    
    UPROPERTY(EditDefaultsOnly)
    float IntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float OffsetVelocityTime;
    
    UTresFieldGenerateTargetParam_e_ex357();
};

