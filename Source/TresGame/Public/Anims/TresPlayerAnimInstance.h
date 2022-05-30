#pragma once
#include "CoreMinimal.h"
#include "TresCharAnimInstance.h"
#include "TresPlayerAnimInstance.generated.h"

class ATresPlayerPawnBase;

UCLASS(NonTransient)
class UTresPlayerAnimInstance : public UTresCharAnimInstance {
    GENERATED_BODY()
public:
    UTresPlayerAnimInstance();
    UFUNCTION(BlueprintPure)
    ATresPlayerPawnBase* TryGetTresPlayerPawnOwner();
    
};

