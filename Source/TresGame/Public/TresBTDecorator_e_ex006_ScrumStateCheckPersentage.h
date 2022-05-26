#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresBTDecorator_e_ex006_ScrumStateCheckPersentage.generated.h"

UCLASS()
class UTresBTDecorator_e_ex006_ScrumStateCheckPersentage : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EArithmeticKeyOperation::Type> m_ArithmeticOperation;
    
    UPROPERTY(EditAnywhere)
    int32 m_Value;
    
    UTresBTDecorator_e_ex006_ScrumStateCheckPersentage();
};

