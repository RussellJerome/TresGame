#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_ValidateAction.generated.h"

class UTresActionDefinitionBase;

UCLASS()
class UTresBTDecorator_ValidateAction : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresActionDefinitionBase> ActionDefinitionOverride;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Target;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 bUseBlackboardQuery: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ActionDefinition;
    
    UPROPERTY(EditAnywhere)
    uint8 bValidateLocation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bValidateOrientation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bValidateExecution: 1;
    
    UTresBTDecorator_ValidateAction();
};

