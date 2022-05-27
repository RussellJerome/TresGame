#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex035_Sliding.generated.h"

class UCurveFloat;
class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex035_Sliding : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AttackStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AttackLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AttackEndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_VelCurve;
    
    UTresAttack3_e_ex035_Sliding();
};

