#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex037_ThunderWhip.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex037_ThunderWhip : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PitchLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FirstMoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_SecondMoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtMoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveSpeed;
    
public:
    UTresAttack2_e_ex037_ThunderWhip();
};

