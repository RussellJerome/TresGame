#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex801_Base.h"
#include "TresAttack1_e_ex801_DoubleClaw.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex801_DoubleClaw : public UTresAttack_e_ex801_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
public:
    UTresAttack1_e_ex801_DoubleClaw();
};

