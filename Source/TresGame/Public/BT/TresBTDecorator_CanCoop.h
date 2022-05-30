#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresCanCoopJoinRole.h"
#include "TresBTDecorator_CanCoop.generated.h"

class UTresCoopDefinitionBase;

UCLASS()
class UTresBTDecorator_CanCoop : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresCoopDefinitionBase> CoopDefinition;
    
    UPROPERTY(EditAnywhere)
    ETresCanCoopJoinRole Role;
    
    UPROPERTY(EditAnywhere)
    bool bRecruitment;
    
    UPROPERTY(EditAnywhere)
    bool bUseBlackboard;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKey;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool bEditRecruitment;
    
    UTresBTDecorator_CanCoop();
};

