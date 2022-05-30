#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex026_WeaponAttackBase.h"
#include "TresAttack3_e_ex026_MissileAttack.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex026_MissileAttack : public UTresAttack_e_ex026_WeaponAttackBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_MinForwardExplosionDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxForwardExplosionDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinBackExplosionDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxBackExplosionDistance;
    
    UTresAttack3_e_ex026_MissileAttack();
};

