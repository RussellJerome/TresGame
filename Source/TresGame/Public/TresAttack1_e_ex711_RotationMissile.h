#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex711_RotationMissile.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex711_RotationMissile : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<TWeakObjectPtr<ATresProjectileBase>> m_MissileArray;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AddRotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MaxRotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveSpeedMaai;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HatchInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MissileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MissileHomingTurnAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MissileHomingTurnMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MissileHomingEndDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MissileHomingOffsetDistMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MissileHomingOffsetDistMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtMoveDist;
    
public:
    UTresAttack1_e_ex711_RotationMissile();
};

