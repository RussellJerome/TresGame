#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_e_ex044_SetHeightLimit.generated.h"

UCLASS()
class UTresBTTask_e_ex044_SetHeightLimit : public UBTTask_BlueprintBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_HeightLimitKey;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxHeight;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_fPoleTurnRadius;
    
    UTresBTTask_e_ex044_SetHeightLimit();
};

