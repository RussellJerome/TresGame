#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex830_Dash.generated.h"

class UAnimationAsset;

UCLASS(HideDropdown)
class UTresAttack1_e_ex830_Dash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_StartAnim;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_LoopAnim;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimationAsset* m_EndAnim;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeed;
    
public:
    UTresAttack1_e_ex830_Dash();
};

