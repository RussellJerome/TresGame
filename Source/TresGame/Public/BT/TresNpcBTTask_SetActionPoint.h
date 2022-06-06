#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_SetActionPoint.generated.h"

UCLASS()
class UTresNpcBTTask_SetActionPoint : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 m_isSetActionTarget: 1;
    
    UPROPERTY(EditAnywhere)
    int32 m_ActionTargetType;
    
    UPROPERTY(EditAnywhere)
    uint8 m_isSearchActionPoint: 1;
    
    UTresNpcBTTask_SetActionPoint();
};

