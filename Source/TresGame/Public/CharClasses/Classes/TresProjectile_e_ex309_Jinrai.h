#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex309_Jinrai.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex309_Jinrai : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 m_LastAttackStartNumHit;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_LastAttackIDName;
    
public:
    ATresProjectile_e_ex309_Jinrai();
};

