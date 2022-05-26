#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialExecProcess.h"
#include "DIRECTIONAL_MOVE_MODE_Enum.h"
#include "TresBTTask_DirectionalMoveSeq.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS()
class UTresBTTask_DirectionalMoveSeq : public UTresBTTask_SequentialExecProcess {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    DIRECTIONAL_MOVE_MODE_Enum m_TaskModeEnum;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_CommonLocomotionDefinition;
    
    UPROPERTY(EditAnywhere)
    float m_CommonMinDistance;
    
    UPROPERTY(EditAnywhere)
    float m_CommonMaxDistance;
    
    UPROPERTY(EditAnywhere)
    float m_CommonPawnDistance;
    
    UPROPERTY(EditAnywhere)
    float m_CommonUpdateTime;
    
    UTresBTTask_DirectionalMoveSeq();
};

