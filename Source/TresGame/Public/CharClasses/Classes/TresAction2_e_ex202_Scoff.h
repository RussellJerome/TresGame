#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex202_Scoff.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAction2_e_ex202_Scoff : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
public:
    UTresAction2_e_ex202_Scoff();
};

