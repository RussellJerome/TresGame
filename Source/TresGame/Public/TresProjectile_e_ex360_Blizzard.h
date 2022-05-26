#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex360_Blizzard.generated.h"

UCLASS()
class ATresProjectile_e_ex360_Blizzard : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectedBulletSpeed;
    
public:
    ATresProjectile_e_ex360_Blizzard();
};

