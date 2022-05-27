#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex105_ChaosShield.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex105_ChaosShield : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeMotPlayRateMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeMotPlayRateMaxChangeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeMotPlayRateMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeMotPlayRateNormalChangeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeRotSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeRotSpeedMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeRotSpeedNormalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeAtkCollStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeAtkCollEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeAtkCollInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeNormalEffChangeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_OwnerTurnSpeed;
    
public:
    UTresAttack1_e_ex105_ChaosShield();
};

