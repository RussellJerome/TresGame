#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex113_Test.generated.h"

UCLASS()
class ATresProjectile_e_ex113_Test : public ATresProjectileBase {
    GENERATED_BODY()
public:
    ATresProjectile_e_ex113_Test();
    UFUNCTION(BlueprintCallable)
    void BP_DoFire();
    
};

