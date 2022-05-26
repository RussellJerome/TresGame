#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialExecProcess.h"
#include "COMMON_ROUNDANDROUND_MODE_Enum.h"
#include "TresBTTask_CommonRoundAndRoundSeq.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS()
class UTresBTTask_CommonRoundAndRoundSeq : public UTresBTTask_SequentialExecProcess {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    COMMON_ROUNDANDROUND_MODE_Enum m_TaskModeEnum;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_CommonLocomotionDefinition;
    
    UPROPERTY(EditAnywhere)
    float m_CommonMoveRadius;
    
    UPROPERTY(EditAnywhere)
    float m_CommonMoveWidth;
    
    UPROPERTY(EditAnywhere)
    float m_CommonTurnRadio;
    
    UPROPERTY(EditAnywhere)
    float m_CommonUpdateTime;
    
    UTresBTTask_CommonRoundAndRoundSeq();
};

