#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBTTask_SequentialAttackProcess.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresBTTask_CommonAttackOnRing.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS()
class UTresBTTask_CommonAttackOnRing : public UTresBTTask_SequentialAttackProcess {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_CommonLocomotionDefinition;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_AvoidanceWeight;
    
    UPROPERTY(EditAnywhere)
    float m_AcceptableRadius;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bPreciseArrival: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bFastAbort: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 m_bFailOnDamageReaction: 1;
    
    UPROPERTY(EditAnywhere)
    float m_CommonUpdateTime;
    
    UPROPERTY(EditAnywhere)
    float m_CommonUpdateTimeRandomDeviation;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bOnRingAutoRadius: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bOnRingAutoItemSpace: 1;
    
    UPROPERTY(EditAnywhere)
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    UTresBTTask_CommonAttackOnRing();
};

