#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex035_ValidateBombardment.generated.h"

UCLASS()
class UTresBTDecorator_e_ex035_ValidateBombardment : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKey;
    
    UPROPERTY(EditAnywhere)
    uint8 bValidateLocation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bValidateOrientation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bValidateExecution: 1;
    
    UTresBTDecorator_e_ex035_ValidateBombardment();
};

