#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex017_FireMagnum.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex017_FireMagnum : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PitchLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtOffsetPosRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_NoHitBulletScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MotCutTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EffStTime;
    
public:
    UTresAttack1_e_ex017_FireMagnum();
};

