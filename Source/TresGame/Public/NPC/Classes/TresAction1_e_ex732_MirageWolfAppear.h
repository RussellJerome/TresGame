#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex732_MirageWolfAppear.generated.h"

UCLASS(HideDropdown)
class UTresAction1_e_ex732_MirageWolfAppear : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bAppearAnim;
    
    UTresAction1_e_ex732_MirageWolfAppear();
};

