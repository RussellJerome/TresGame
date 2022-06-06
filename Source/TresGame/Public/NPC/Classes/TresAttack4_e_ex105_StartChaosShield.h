#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex105_StartChaosShield.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_e_ex105_StartChaosShield : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeMotPlayRateMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeMotPlayRateMaxChangeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeRotSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeRotSpeedMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeAtkCollStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeAtkCollInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_OwnerTurnSpeed;
    
public:
    UTresAttack4_e_ex105_StartChaosShield();
};

