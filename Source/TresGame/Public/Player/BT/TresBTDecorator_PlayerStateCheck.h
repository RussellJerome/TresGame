#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresBTPlayerStateCkeck.h"
#include "TresBTDecorator_PlayerStateCheck.generated.h"

UCLASS()
class UTresBTDecorator_PlayerStateCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresBTPlayerStateCkeck m_PlayerStateCheck;
    
    UTresBTDecorator_PlayerStateCheck();
};

