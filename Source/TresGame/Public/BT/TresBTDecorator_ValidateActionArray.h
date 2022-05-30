#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "Tres_ValidateAction_Param.h"
#include "TresBTDecorator_ValidateActionArray.generated.h"

UCLASS()
class UTresBTDecorator_ValidateActionArray : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTres_ValidateAction_Param> m_ValidateActionParam;
    
    UTresBTDecorator_ValidateActionArray();
};

