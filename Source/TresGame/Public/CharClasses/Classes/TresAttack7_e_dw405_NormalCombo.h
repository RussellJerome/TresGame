#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_dw405_ComboBase.h"
#include "TresE_dw405NormalComboParam.h"
#include "TresAttack7_e_dw405_NormalCombo.generated.h"

UCLASS(HideDropdown)
class UTresAttack7_e_dw405_NormalCombo : public UTresAttack_e_dw405_ComboBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_dw405NormalComboParam> m_ComboParams;
    
public:
    UTresAttack7_e_dw405_NormalCombo();
};

