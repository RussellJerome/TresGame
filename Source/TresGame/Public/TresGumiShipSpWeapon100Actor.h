#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSpecialWeaponBaseActor.h"
#include "TresGumiShipSpWeapon100Actor.generated.h"

UCLASS(Abstract)
class ATresGumiShipSpWeapon100Actor : public ATresGumiShipSpecialWeaponBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Delay;
    
    ATresGumiShipSpWeapon100Actor();
protected:
    UFUNCTION()
    void OnPostShootBullet();
    
};

