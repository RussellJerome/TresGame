#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_SetFreeWalkMoveType.generated.h"

UCLASS()
class UTresNpcBTTask_SetFreeWalkMoveType : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bWalk;
    
    UTresNpcBTTask_SetFreeWalkMoveType();
};

