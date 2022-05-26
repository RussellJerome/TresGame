#pragma once
#include "CoreMinimal.h"
#include "TresEnemyToyRoboPawnBase.h"
#include "TresEnemyAirdroidPawnBase.generated.h"

class UCapsuleComponent;

UCLASS()
class ATresEnemyAirdroidPawnBase : public ATresEnemyToyRoboPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsuleComponent* MyBlowOffWindComponent;
    
public:
    ATresEnemyAirdroidPawnBase();
    UFUNCTION(BlueprintPure)
    float GetFanRotation() const;
    
};

