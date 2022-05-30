#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex202_PoisonFloor.generated.h"

UCLASS()
class ATresProjectile_e_ex202_PoisonFloor : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_AtkCollActiveTime;
    
public:
    ATresProjectile_e_ex202_PoisonFloor();
};

