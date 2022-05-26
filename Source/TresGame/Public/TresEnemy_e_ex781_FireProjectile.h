#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_ex781_FireProjectile.generated.h"

UCLASS()
class ATresEnemy_e_ex781_FireProjectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_BulletListSet;
    
    ATresEnemy_e_ex781_FireProjectile();
};

