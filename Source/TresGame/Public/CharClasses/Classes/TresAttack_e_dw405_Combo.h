#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresE_dw405ComboParam.h"
#include "TresAttack_e_dw405_Combo.generated.h"

class UTresAttack_e_dw405_Base;

UCLASS(HideDropdown)
class UTresAttack_e_dw405_Combo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_dw405ComboParam> m_ComboParams;
    
    UPROPERTY()
    UTresAttack_e_dw405_Base* m_CurrentDefinition;
    
public:
    UTresAttack_e_dw405_Combo();
};

