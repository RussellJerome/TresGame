#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex061_MapHit.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex061_MapHit : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_TakeOverHitGroupName;
    
    ATresProjectile_e_ex061_MapHit();
};

