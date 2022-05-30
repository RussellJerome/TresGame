#pragma once
#include "CoreMinimal.h"
#include "TresPlayerPawnBase.h"
#include "TresPlayerPawnSora.generated.h"

UCLASS()
class ATresPlayerPawnSora : public ATresPlayerPawnBase {
    GENERATED_BODY()
public:
    ATresPlayerPawnSora();
    UFUNCTION(Exec)
    void DebugNotifyCommandQuickBattle();
    
};

