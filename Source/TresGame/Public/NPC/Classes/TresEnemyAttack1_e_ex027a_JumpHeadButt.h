#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresEnemyAttack1_e_ex027a_JumpHeadButt.generated.h"

UCLASS(HideDropdown)
class UTresEnemyAttack1_e_ex027a_JumpHeadButt : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_JumpSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JumpSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DiveSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DiveSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FloatSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JumpGravityZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CheckPitch;
    
    UTresEnemyAttack1_e_ex027a_JumpHeadButt();
};

