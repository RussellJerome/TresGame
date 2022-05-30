#pragma once
#include "CoreMinimal.h"
#include "TresEnemyToyPawnBase.h"
#include "TresEnemyPawn_e_ex822.generated.h"

class UCapsuleComponent;

UCLASS()
class ATresEnemyPawn_e_ex822 : public ATresEnemyToyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* MySuctionWindComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* MyBlowOffWindComponent;
    
public:
    ATresEnemyPawn_e_ex822();
};

