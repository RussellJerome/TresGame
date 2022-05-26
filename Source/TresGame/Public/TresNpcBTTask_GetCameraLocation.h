#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresNpcBTTask_GetCameraLocation.generated.h"

UCLASS()
class UTresNpcBTTask_GetCameraLocation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardValue;
    
    UTresNpcBTTask_GetCameraLocation();
};

