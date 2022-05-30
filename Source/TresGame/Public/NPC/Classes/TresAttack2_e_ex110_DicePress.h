#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex110_DicePress.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex110_DicePress : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DiceBoundHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DiceBoundHeight2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DiceGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DiceMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DiceTurnLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DiceTurnZurashi;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DiceOffsetDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DiceRotSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DiceRotSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DiceRotSpeedRoll;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DiceHomingAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DiceReflectGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ReflectLinearDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ReflectLinearSpeed;
    
public:
    UTresAttack2_e_ex110_DicePress();
};

