#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex711_VerticalMissile.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex711_VerticalMissile : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<TWeakObjectPtr<ATresProjectileBase>> m_MissileArray;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MissileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MissileHomingStDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MissileHomingTurnAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MissileHomingTurnMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MissileHomingOffsetDistMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MissileHomingOffsetDistMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MissileHomingEndDist;
    
public:
    UTresAttack2_e_ex711_VerticalMissile();
};

