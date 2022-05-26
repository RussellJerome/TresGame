#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialExecProcess.h"
#include "COMMON_SURROUNDTARGET_MODE_Enum.h"
#include "TresBTTask_SurroundTargetSeq_T.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS()
class UTresBTTask_SurroundTargetSeq_T : public UTresBTTask_SequentialExecProcess {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    COMMON_SURROUNDTARGET_MODE_Enum m_TaskModeEnum;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_CommonLocomotionDefinition;
    
    UPROPERTY(EditAnywhere)
    float m_CommonMoveRadius;
    
    UPROPERTY(EditAnywhere)
    float m_CommonMoveRadiusWidth;
    
    UPROPERTY(EditAnywhere)
    float m_CommonMoveWidth;
    
    UPROPERTY(EditAnywhere)
    float m_CommonTurnRadio;
    
    UPROPERTY(EditAnywhere)
    float m_CommonUpdateTime;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_Angle;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_ItemSpace;
    
    UTresBTTask_SurroundTargetSeq_T();
};

