#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialExecProcess.h"
#include "TresBTTask_CommonTurnIdlingSeq.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS()
class UTresBTTask_CommonTurnIdlingSeq : public UTresBTTask_SequentialExecProcess {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_CommonLocomotionDefinition;
    
    UPROPERTY(EditAnywhere)
    float m_CommonTurningValue;
    
    UPROPERTY(EditAnywhere)
    float m_CommonAvoidanceWeight;
    
    UPROPERTY(EditAnywhere)
    float m_CommonRangeCheck;
    
    UPROPERTY(EditAnywhere)
    float m_CommonAngleCheck;
    
    UTresBTTask_CommonTurnIdlingSeq();
};

