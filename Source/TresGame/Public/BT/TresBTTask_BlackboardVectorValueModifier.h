#pragma once
#include "CoreMinimal.h"
#include "TresBTTask_BlackboardValueModifierBase.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_BlackboardVectorValueModifier.generated.h"

UCLASS()
class UTresBTTask_BlackboardVectorValueModifier : public UTresBTTask_BlackboardValueModifierBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 m_bUseBlackboard: 1;
    
    UPROPERTY(EditAnywhere)
    FVector m_Value;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyValueB;
    
    UTresBTTask_BlackboardVectorValueModifier();
};

