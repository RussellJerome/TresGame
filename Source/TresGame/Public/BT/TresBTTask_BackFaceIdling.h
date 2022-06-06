#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "TresBTTask_BackFaceIdling.generated.h"

UCLASS()
class UTresBTTask_BackFaceIdling : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Offset;
    
    UPROPERTY(EditAnywhere)
    float RandomAngleLimit;
    
    UPROPERTY(EditAnywhere)
    float TurnLimit;
    
    UPROPERTY(EditAnywhere)
    float CoolDownTimer;
    
    UTresBTTask_BackFaceIdling();
};

