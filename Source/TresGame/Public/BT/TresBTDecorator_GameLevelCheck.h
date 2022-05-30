#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "ETresGameLevelID.h"
#include "TresBTDecorator_GameLevelCheck.generated.h"

UCLASS()
class UTresBTDecorator_GameLevelCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EArithmeticKeyOperation::Type> m_ArithmeticOperation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresGameLevelID> m_GameLevel;
    
    UTresBTDecorator_GameLevelCheck();
};

