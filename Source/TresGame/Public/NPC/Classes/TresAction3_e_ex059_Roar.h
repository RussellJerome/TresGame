#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ex059_Roar.generated.h"

UCLASS(HideDropdown)
class UTresAction3_e_ex059_Roar : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_AnimName;
    
    UTresAction3_e_ex059_Roar();
};

