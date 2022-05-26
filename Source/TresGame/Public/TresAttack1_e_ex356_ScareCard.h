#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_XIIILB_Base.h"
#include "TresAttack1_e_ex356_ScareCard.generated.h"

class ATresProjectile_e_ex356_HideAndSeekBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex356_ScareCard : public UTresAttack_XIIILB_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex356_HideAndSeekBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetDistance2D;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetDistanceHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShakeHeightRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OneShakeTime;
    
public:
    UTresAttack1_e_ex356_ScareCard();
};

