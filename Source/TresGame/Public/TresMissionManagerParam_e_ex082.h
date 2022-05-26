#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttackIntervalParam_e_ex082.h"
#include "TresMissionManagerParam_e_ex082.generated.h"

UCLASS(Abstract, EditInlineNew)
class UTresMissionManagerParam_e_ex082 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float ModeChangeTimeList[3];
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FAttackIntervalParam_e_ex082> AttackIntervalParamList;
    
    UTresMissionManagerParam_e_ex082();
};

