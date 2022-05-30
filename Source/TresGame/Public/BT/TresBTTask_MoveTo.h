#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_MoveTo.generated.h"

class UTresLocomotionDefinitionBase;

UCLASS()
class UTresBTTask_MoveTo : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_LocomotionDefinition;
    
    UPROPERTY(EditAnywhere)
    float m_AcceptableRadius;
    
    UPROPERTY(EditAnywhere)
    bool m_bUsePathFollowing;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseAvoidance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool m_bAllowPartialPath;
    
    UPROPERTY(EditAnywhere)
    bool m_bStopOnOverlap;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_AvoidanceWeight;
    
    UPROPERTY(EditAnywhere)
    bool m_bPreciseArrival;
    
    UPROPERTY(EditAnywhere)
    bool m_bFastAbort;
    
    UPROPERTY(EditAnywhere)
    bool m_bFailOnDamageReaction;
    
    UPROPERTY(EditAnywhere)
    float m_AbortMoveTimeToKeepMoving;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool m_bUseFindPathAsync;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool m_bUseBBLocomotionDefinition;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BBLocomotionDefinitionKey;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_GoalComponetLocationTetherDistance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_AvoidanceRadiusScale;
    
    UTresBTTask_MoveTo();
};

