#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LEAVE_FROM_TARGET_MODE_Enum.h"
#include "TresBTTask_SequentialExecProcess.h"
#include "TresBTTask_LeaveFromTarget_Q.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS()
class UTresBTTask_LeaveFromTarget_Q : public UTresBTTask_SequentialExecProcess {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    LEAVE_FROM_TARGET_MODE_Enum m_TaskModeEnum;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_CommonLocomotionDefinition;
    
    UPROPERTY(EditAnywhere)
    float m_FirstUpdateTime;
    
    UPROPERTY(EditAnywhere)
    float m_FirstTimeLimit;
    
    UPROPERTY(EditAnywhere)
    float m_CommonUpdateTime;
    
    UPROPERTY(EditAnywhere)
    float m_CommonOnRingAngle;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_ItemSpace;
    
    UTresBTTask_LeaveFromTarget_Q();
};

