#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_GetActorLocation.generated.h"

UCLASS()
class UTresBTTask_GetActorLocation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_KeyActor;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_KeyLocation;
    
    UTresBTTask_GetActorLocation();
};

