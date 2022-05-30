#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialExecProcess.h"
#include "TresBTTask_LeaveAndClose_Q.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS()
class UTresBTTask_LeaveAndClose_Q : public UTresBTTask_SequentialExecProcess {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_CommonLocomotionDefinition;
    
    UPROPERTY(EditAnywhere)
    float m_CommonUpdateTime;
    
    UPROPERTY(EditAnywhere)
    float m_CommonOnRingAngle;
    
    UPROPERTY(EditAnywhere)
    float m_AwayRange;
    
    UPROPERTY(EditAnywhere)
    float m_SafeAngle;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_ItemSpace;
    
    UTresBTTask_LeaveAndClose_Q();
};

