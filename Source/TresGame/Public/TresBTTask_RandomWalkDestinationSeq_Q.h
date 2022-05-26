#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialExecProcess.h"
#include "TresBTTask_RandomWalkDestinationSeq_Q.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS()
class UTresBTTask_RandomWalkDestinationSeq_Q : public UTresBTTask_SequentialExecProcess {
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
    
    UTresBTTask_RandomWalkDestinationSeq_Q();
};

