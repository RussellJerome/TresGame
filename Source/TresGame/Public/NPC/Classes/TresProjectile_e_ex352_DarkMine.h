#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "ETres_e_ex352_DarkMineKind.h"
#include "TresProjectile_e_ex352_DarkMine.generated.h"

UCLASS(HideDropdown)
class ATresProjectile_e_ex352_DarkMine : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    ETres_e_ex352_DarkMineKind m_DMKind;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_DMExplosionProjectileName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DotAngle;
    
public:
    ATresProjectile_e_ex352_DarkMine();
};

