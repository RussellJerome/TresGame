#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack6_e_ex035_NutsThrow_Wall.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack6_e_ex035_NutsThrow_Wall : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectileBase* m_pNuts;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinInitVel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxInitVel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxYaw;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_fRightSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_fLeftSocketName;
    
    UTresAttack6_e_ex035_NutsThrow_Wall();
};

