#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialExecProcess.h"
#include "COMMON_SHADOWMOVE_MODE_Enum.h"
#include "TresBTTask_ShadowMoveSeq.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS()
class UTresBTTask_ShadowMoveSeq : public UTresBTTask_SequentialExecProcess {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    COMMON_SHADOWMOVE_MODE_Enum m_TaskModeEnum;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_CommonLocomotionDefinition;
    
    UPROPERTY(EditAnywhere)
    float m_CommonMoveRadius;
    
    UPROPERTY(EditAnywhere)
    float m_CommonMoveRandomRadius;
    
    UTresBTTask_ShadowMoveSeq();
};

