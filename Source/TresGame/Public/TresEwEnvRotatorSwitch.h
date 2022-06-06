#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresEwEnvRotatorSwitch.generated.h"

class USceneComponent;

UCLASS()
class ATresEwEnvRotatorSwitch : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FName RemoteEventName;
    
    ATresEwEnvRotatorSwitch();
    UFUNCTION(BlueprintCallable)
    void SetMoving(bool bMoving);
    
    UFUNCTION(BlueprintPure)
    bool IsMoving();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_SetMoving(bool bMoving);
    
};

