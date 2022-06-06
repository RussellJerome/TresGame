#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresFRThinkOfYouInterface.h"
#include "TresEnemyState_XIII_FRThinkOfYouDamage.generated.h"

UCLASS(HideDropdown)
class UTresEnemyState_XIII_FRThinkOfYouDamage : public UTresStateBase, public ITresFRThinkOfYouInterface {
    GENERATED_BODY()
public:
    UTresEnemyState_XIII_FRThinkOfYouDamage();
    
    // Fix for true pure virtual functions not being implemented
};

