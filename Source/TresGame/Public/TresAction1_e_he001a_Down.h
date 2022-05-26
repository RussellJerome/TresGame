#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_he001a_Down.generated.h"

UCLASS(HideDropdown)
class UTresAction1_e_he001a_Down : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_DownTime;
    
public:
    UTresAction1_e_he001a_Down();
};

