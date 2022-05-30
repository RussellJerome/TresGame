#pragma once
#include "CoreMinimal.h"
#include "EX355_ComboTractionInfo.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex355_Combo.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex355_Combo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX355_ComboTractionInfo> m_TractionInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAirTraction;
    
    UTresAttack1_e_ex355_Combo();
};

