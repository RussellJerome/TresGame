#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_dw405_Avatar_Base.h"
#include "TresAction_e_dw405_ComboInterface.h"
#include "TresAttack3_e_dw405_Avatar_Combo.generated.h"

class UTresAttack_e_dw405_Base;

UCLASS(HideDropdown)
class UTresAttack3_e_dw405_Avatar_Combo : public UTresAttack_e_dw405_Avatar_Base, public ITresAction_e_dw405_ComboInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UTresAttack_e_dw405_Base* m_CurrentState;
    
public:
    UTresAttack3_e_dw405_Avatar_Combo();
    
    // Fix for true pure virtual functions not being implemented
};

