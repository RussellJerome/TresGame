#pragma once
#include "CoreMinimal.h"
#include "TresCharState_OneAction.h"
#include "TresPlayerState_OneAction.generated.h"

UCLASS()
class UTresPlayerState_OneAction : public UTresCharState_OneAction {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresOnActionStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresOnActionEnd);
    
    UTresPlayerState_OneAction();
};

