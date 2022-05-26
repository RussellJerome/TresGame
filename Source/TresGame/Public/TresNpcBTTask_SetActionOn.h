#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ETresNpcActionOnType.h"
#include "TresNpcBTTask_SetActionOn.generated.h"

UCLASS()
class UTresNpcBTTask_SetActionOn : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresNpcActionOnType> m_ActionOnType;
    
    UPROPERTY(EditAnywhere)
    float m_ActionTime;
    
    UTresNpcBTTask_SetActionOn();
};

