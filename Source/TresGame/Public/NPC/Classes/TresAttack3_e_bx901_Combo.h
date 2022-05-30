#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "BX901_ComboInfo.h"
#include "TresAttack3_e_bx901_Combo.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_bx901_Combo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fInitBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPredictionTime;
    
    UPROPERTY(EditDefaultsOnly)
    FBX901_ComboInfo m_ComboInfoArray[3];
    
    UTresAttack3_e_bx901_Combo();
};

