#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EEX359_ComboStartType.h"
#include "EX359_ComboTractionInfo.h"
#include "EX359_BeamInfoSet.h"
#include "EX359_ComboAttackIDModifySet.h"
#include "TresAttack1_e_ex359_Combo.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex359_Combo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bForceCombo;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX359_ComboStartType> m_ComboStartType;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX359_ComboTractionInfo> m_TractionInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_BeamInfoSet m_BeamInfoSet;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX359_ComboAttackIDModifySet> m_AttackIDModifySetArray;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iEffectGoupID;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugDisp;
    
    UTresAttack1_e_ex359_Combo();
};

