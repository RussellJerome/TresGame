#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresGimmickCA_RunAwayShip_Projectile.generated.h"

UCLASS(Abstract)
class ATresGimmickCA_RunAwayShip_Projectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_CheckPlayerRange;
    
public:
    ATresGimmickCA_RunAwayShip_Projectile();
};

