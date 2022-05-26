#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "TresBTTask_MoveToProcess.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS(Abstract)
class UTresBTTask_MoveToProcess : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_LocomotionDefinition;
    
    UPROPERTY(EditAnywhere)
    float m_AcceptableRadius;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bUsePathFollowing: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bUseAvoidance: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 m_bAllowPartialPath: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bStopOnOverlap: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_AvoidanceWeight;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bPreciseArrival: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bFastAbort: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bFailOnDamageReaction: 1;
    
    UTresBTTask_MoveToProcess();
};

