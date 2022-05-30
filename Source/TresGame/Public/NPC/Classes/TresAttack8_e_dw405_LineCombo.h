#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_dw405_ComboBase.h"
#include "TresE_dw405LineComboParam.h"
#include "TresAttack8_e_dw405_LineCombo.generated.h"

UCLASS(HideDropdown)
class UTresAttack8_e_dw405_LineCombo : public UTresAttack_e_dw405_ComboBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_dw405LineComboParam> m_ComboParams;
    
public:
    UTresAttack8_e_dw405_LineCombo();
};

