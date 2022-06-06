#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex773_ReverseFlareShot.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex773_ReverseFlareShot : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName ExplosionName;
    
    ATresProjectile_e_ex773_ReverseFlareShot();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_SpawnExplosion();
    
};

