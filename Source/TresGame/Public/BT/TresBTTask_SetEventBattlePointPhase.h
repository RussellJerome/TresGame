#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "TresBTTask_SetEventBattlePointPhase.generated.h"

UCLASS()
class UTresBTTask_SetEventBattlePointPhase : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_PhaseTag;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseActorTag;
    
    UPROPERTY(EditAnywhere)
    FName m_ActorTag;
    
    UTresBTTask_SetEventBattlePointPhase();
};

