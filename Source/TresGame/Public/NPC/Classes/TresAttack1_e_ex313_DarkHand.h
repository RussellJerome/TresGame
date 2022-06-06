#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "ETresEnemy_e_ex313_DarkHandComboType.h"
#include "TresAttack1_e_ex313_DarkHand.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex313_DarkHand : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresEnemy_e_ex313_DarkHandComboType> m_pro_DarkHandComboList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShockWaveRotYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShockWaveMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShockWaveMoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SlashRootMotionScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ThrustRootMotionScale;
    
public:
    UTresAttack1_e_ex313_DarkHand();
};

