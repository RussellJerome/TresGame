#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex362_DarkVolley.generated.h"

UCLASS()
class ATresProjectile_e_ex362_DarkVolley : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectedBulletSpeed;
    
public:
    ATresProjectile_e_ex362_DarkVolley();
};

