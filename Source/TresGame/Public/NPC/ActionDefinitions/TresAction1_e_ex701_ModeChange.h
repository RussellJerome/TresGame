#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex701_ModeChange.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAction1_e_ex701_ModeChange : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
public:
    UTresAction1_e_ex701_ModeChange();
};

