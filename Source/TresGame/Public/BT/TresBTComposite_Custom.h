#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "ETresCustomCompositeReturnCondition.h"
#include "TresBTComposite_Custom.generated.h"

UCLASS()
class UTresBTComposite_Custom : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresCustomCompositeReturnCondition::Type> ReturnCondition;
    
    UTresBTComposite_Custom();
};

