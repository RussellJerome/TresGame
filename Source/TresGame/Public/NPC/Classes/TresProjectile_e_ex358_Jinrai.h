#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex358_Jinrai.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex358_Jinrai : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 m_LastAttackStartNumHit;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_LastAttackIDName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FirstHitAddSize;
    
public:
    ATresProjectile_e_ex358_Jinrai();
};

