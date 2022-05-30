#pragma once
#include "CoreMinimal.h"
#include "TresBlackboardFloatValueModifier.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresBTTask_BlackboardFloatValueModifierArray.generated.h"

UCLASS()
class UTresBTTask_BlackboardFloatValueModifierArray : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTresBlackboardFloatValueModifier> m_FloatValueModifiers;
    
    UTresBTTask_BlackboardFloatValueModifierArray();
};

