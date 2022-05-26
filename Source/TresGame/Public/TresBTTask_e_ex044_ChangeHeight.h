#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_Action.h"
#include "TresActionTaskParam.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_e_ex044_ChangeHeight.generated.h"

class UTresAction1_e_ex044_ChangeHeight;

UCLASS()
class UTresBTTask_e_ex044_ChangeHeight : public UTresBTTask_Action {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresAction1_e_ex044_ChangeHeight> m_ActionDefinition_e_ex044;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresActionTaskParam> ActionTaskParams;
    
    UPROPERTY(VisibleAnywhere)
    FBlackboardKeySelector m_HeightValueKey;
    
    UPROPERTY(EditAnywhere)
    bool bUseBBKey;
    
    UTresBTTask_e_ex044_ChangeHeight();
};

