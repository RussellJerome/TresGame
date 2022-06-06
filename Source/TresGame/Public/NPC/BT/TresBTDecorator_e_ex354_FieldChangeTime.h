#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex354_FieldChangeTime.generated.h"

UCLASS()
class UTresBTDecorator_e_ex354_FieldChangeTime : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fFieldChangePastTime;
    
    UTresBTDecorator_e_ex354_FieldChangeTime();
};

