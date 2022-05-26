#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialAttackProcess.h"
#include "TresBTTask_CommonAttackRandomWalk_Q.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS()
class UTresBTTask_CommonAttackRandomWalk_Q : public UTresBTTask_SequentialAttackProcess {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_CommonLocomotionDefinition;
    
    UPROPERTY(EditAnywhere)
    float m_CommonUpdateTime;
    
    UPROPERTY(EditAnywhere)
    float m_CommonOnRingAngle;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_ItemSpace;
    
    UTresBTTask_CommonAttackRandomWalk_Q();
};

