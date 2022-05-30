#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "TresBTDecorator_IsEventBattlePointPhase.generated.h"

UCLASS()
class UTresBTDecorator_IsEventBattlePointPhase : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGameplayTag> m_PhaseTags;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseActorTag;
    
    UPROPERTY(EditAnywhere)
    FName m_ActorTag;
    
    UTresBTDecorator_IsEventBattlePointPhase();
};

